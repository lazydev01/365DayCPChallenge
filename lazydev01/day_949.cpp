#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kTree(){
    int n, k, d;
    cin >> n >> k >> d;
    int MOD = 1e9 + 7;
    vector<int> dpAll(n+1), dpSmall(n+1);
    dpAll[0] = 1;
    dpSmall[0] = 1;
    for(int i = 1; i<=n; i++){
        for(int j = max(i-k, 0ll); j<=i-1; j++){
            dpAll[i] = (dpAll[i] + dpAll[j]) % MOD;
        }
    }
    for(int i = 1; i<=n; i++){
        for(int j = max(i-(d-1), 0ll); j<=i-1; j++){
            dpSmall[i] = (dpSmall[i] + dpSmall[j]) % MOD;
        }
    }
    int ans = (dpAll[n] - dpSmall[n] + MOD) % MOD;
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kTree();
    return 0;
}