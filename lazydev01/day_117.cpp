/*

    Question -> https://www.codechef.com/problems/SPBALL

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    int mod = 1000000007;
    vector<int> dp(1000001);
    dp[1] = 1;
    for(int i=2; i<=1000000; i++){
        dp[i] = (dp[i-1]*i)%mod;
    }

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        int ans = 0;
        for(int i=0; i<arr.size(); i++){
            ans = (ans + dp[arr[i]])%mod;
        }
        cout << ans << endl;
    }
    return 0;
}