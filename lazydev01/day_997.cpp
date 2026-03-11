#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void oracAndModels(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        vector<int> dp(n+1, -1);
        int maxAns = 1;
        for(int i = n; i>=1; i--){
            int ans = 1;
            for(int j = 2*i; j <= n; j+=i){
                if(arr[j] > arr[i]){
                    ans = max(ans, 1 + dp[j]);
                }
            }
            maxAns = max(maxAns, ans);
            dp[i] = ans;
        }
        cout << maxAns << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    oracAndModels();
    return 0;
}