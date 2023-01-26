/*

Question -> https://www.codechef.com/problems/GREG

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
    int x, y;
    cin >> x >> y;
    int n = x+y;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) 
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int ans = 0;
    for(int i=2; i<=n; i++){
        if(prime[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}