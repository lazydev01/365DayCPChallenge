#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int MOD = 1e9 + 7;

void masmokhAndACM(){
    int n, k;
    cin >> n >> k;
    vector<vector<int>> factors(n+1, vector<int>());
    for(int i = 1; i <= n; i++){
        for(int j = 1; j * j <= i; j++){
            if(i % j == 0){
                factors[i].push_back(j);
                if(j != i / j){
                    factors[i].push_back(i/j);
                }
            }
        }
    }

    vector<vector<int>> dp(k+1, vector<int>(n+1));
    for(int i = 1; i <= n; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= k; i++){
        for(int j = 1; j <= n; j++){
            dp[i][j] = 0;
            for(auto f : factors[j]){
                dp[i][j] = (dp[i][j] + dp[i-1][f]) % MOD;
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = (ans + dp[k][i]) % MOD;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    masmokhAndACM();
    return 0;
}