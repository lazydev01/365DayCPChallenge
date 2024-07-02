#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void removePrefix(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int,int> mp;
        int ind = -1;
        for(int i=n-1; i>=0; i--){
            mp[arr[i]]++;
            if(mp[arr[i]] > 1){
                ind=i;
                break;
            }
        }
        cout << ind + 1 << endl;
    }
}

void findMissingAndRepeatingAnswerOptimal1(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum_arr = 0;
    int sum2_arr = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum_arr += arr[i];
        sum2_arr += (arr[i]*arr[i]);
    }
    int sum_n = (n*(n+1)) / 2;
    int sum2_n = (n*(n+1)*((2*n)+1)) / 6;
    int repeating_number_x, missing_number_y;
    int x_minus_y = sum_arr - sum_n;
    int x2_minus_y2 = sum2_arr - sum2_n;
    int x_plus_y = x2_minus_y2/x_minus_y;
    repeating_number_x = (x_plus_y + x_minus_y)/2;
    missing_number_y = x_plus_y - repeating_number_x;
    cout << repeating_number_x << " " << missing_number_y << endl;
}

void findMissingAndRepeatingAnswerOptimal2(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int x_xor_y = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        x_xor_y ^= arr[i];
        x_xor_y ^= (i+1);
    }
    int missing_number_x, repeating_number_y;
    int bit = 1;
    for(int i=0; i<32; i++){
        if((x_xor_y & bit) != 0) {
            break;
        }
        bit = bit << 1;
    }
    int zero_bit = 0;
    int one_bit = 0;
    for(int i=0; i<n; i++){
        if((i+1) & bit){
            one_bit ^= (i+1);
        }
        else{
            zero_bit ^= (i+1);
        }
        if(arr[i] & bit){
            one_bit ^= arr[i];
        }
        else{
            zero_bit ^= arr[i];
        }
    }
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==zero_bit){
            count++;
        }
    }
    if(count==2){
        repeating_number_y = zero_bit;
        missing_number_x = one_bit;
    }
    else{
        repeating_number_y = one_bit;
        missing_number_x = zero_bit;
    }
    cout << repeating_number_y << " " << missing_number_x << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // removePrefix();
    // findMissingAndRepeatingAnswerOptimal1();
    findMissingAndRepeatingAnswerOptimal2();
    return 0;
}