#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void pow_x_n(){
    double x;
    int n;
    cin >> x >> n;
    bool is_negative = false;
    if(n<0) is_negative = true;
    n = abs(n);
    double ans = 1.0;
    for(int i=0; i<n; i++){
        ans *= x;
    }
    if(is_negative) ans = 1.0 / (ans * 1.0);
    cout << fixed << setprecision(5) << ans << endl;
}

void pow_x_n_optimal(){
    double x;
    int n;
    cin >> x >> n;
    long nn = n;
    bool is_negative = false;
    if(n<0){
         is_negative = true;
         nn *= -1;
    }
    double ans = 1.0;
    while(nn!=0){
        if(nn%2){
            ans = ans * x;
            nn--;
        }
        else{
            x = x * x;
            nn/=2;
        }
    }
    if(is_negative) ans = 1.0 / (ans * 1.0);
    cout << fixed << setprecision(5) << ans << endl;
}

void findMajorityElement(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int currMajor = arr[0];
    int freq = 1;
    for(int i=0; i<n; i++){
        if(arr[i] == currMajor){
            freq++;
        }
        else{
            freq--;
        }
        if(freq==0){
            currMajor = arr[i];
            freq = 1;
        }
    }
    cout << currMajor << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    // pow_x_n_optimal();
    findMajorityElement();
    return 0;
}