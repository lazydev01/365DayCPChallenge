#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void flowers(){
    int t, k;
    cin >> t >> k;
    int MOD = 1e9 + 7;
    vector<int> dp(1e5+1, 0);
    for(int i = 1; i<k; i++){
        dp[i] = 1;
    }
    dp[k] = 2;
    for(int i = k+1; i <= 1e5; i++){
        dp[i] = dp[i-1] + dp[i-k];
    }
    for(int i = 1; i <= 1e5; i++){
        dp[i] = (dp[i] +  dp[i-1]) % MOD;

    }
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans = (dp[b] - dp[a - 1] + MOD) % MOD;
        cout << ans << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    flowers();
    return 0;
}

/*

1 -> R
2 -> WW, RR
3 -> WWR, RWW, RRR


*/