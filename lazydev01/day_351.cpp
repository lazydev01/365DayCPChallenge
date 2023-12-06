#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

// #define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define mod 1000000007

int N = 1e5 + 5;

bool tetris(){

    vector<vector<int>> dp(N+1, vector<int> (2, 0));
    dp[1][0] = 1;
    dp[2][0] = 1;
    dp[3][0] = 3;
    dp[4][0] = 4;
    dp[1][1] = 0;
    dp[2][1] = 1;
    dp[3][1] = 1;
    dp[4][1] = 4;
    for(int i=5; i<N; i++){
        (dp[i][0] += dp[i-1][1]);
        dp[i][0]%=mod;
        (dp[i][0] += dp[i-2][0]);
        dp[i][0]%=mod;
        (dp[i][0] += dp[i-3][0]);
        dp[i][0]%=mod;
        (dp[i][0] += dp[i-4][0]);
        dp[i][0]%=mod;
        (dp[i][1] += dp[i-1][0]);
        dp[i][1]%=mod;
        (dp[i][1] += dp[i-2][1]);
        dp[i][1]%=mod;
        (dp[i][1] += dp[i-3][1]);
        dp[i][1]%=mod;
        (dp[i][1] += dp[i-4][1]);
        dp[i][1]%=mod;
    }
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int l;
        cin >> l;
        cout << dp[l][0]%mod << endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    tetris();
    return 0;
}