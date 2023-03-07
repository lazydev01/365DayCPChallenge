/*

    Question -> https://www.codechef.com/problems/XOREQUAL

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

    while (t--)
    {

        int n;
        cin >> n;
        int ans = 1;
        for(int i=1; i<n; i++){
            ans = (ans%1000000007 * 2)%1000000007;
        }
        cout << ans << endl;

    }
    return 0;
}