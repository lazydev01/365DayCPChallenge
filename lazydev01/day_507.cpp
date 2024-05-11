#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void stripes(){
    int t;
    cin >> t;
    while(t--){
        vector<string> arr(8);
        for(int i=0; i<8; i++){
            cin >> arr[i];
        }
        bool red = false;
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++){
                if(arr[i][j]==arr[i][j+1]){
                    if(j==6){
                        if(arr[i][j]=='R'){
                            red = true;
                        }
                    }
                }
                else{
                    break;
                }
            }
        }
        for(int i=0; i<8; i++){
            for(int j=0; j<7; j++){
                if(arr[j][i]==arr[j+1][i]){
                    if(j==6){
                        if(arr[j][i]=='B'){
                            red = false;
                        }
                    }
                }
                else{
                    break;
                }
            }
        }
        if(red){
            cout << "R" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
}

void buttons(){
    int n;
    cin >> n;
    int ans = n;
    for(int i=2; i<=n; i++){
        ans += (((n-i)*i)+1);
    }
    cout << ans << endl;
}

vector<int> factorize(int n){
    vector<int> ans;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            if(n/i == i){
                ans.push_back(i);
            }
            else{
                ans.push_back(i);
                ans.push_back(n/i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

void buyingShovels(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr = factorize(n);
        int index = upper_bound(arr.begin(), arr.end(), k) - arr.begin() - 1;
        cout << n/arr[index] << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // stripes();
    // buttons();
    buyingShovels();
    return 0;
}