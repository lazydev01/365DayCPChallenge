/*

    Question -> https://www.codechef.com/problems/SLOWSOLN

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

        int maxt, maxn, sumn;
        cin >> maxt >> maxn >> sumn;
        int div = sumn/maxn;
        int maxsq = div * maxn * maxn;
        int left = sumn - (div*maxn);
        int leftsq = left * left;
        int test_max = maxt * maxn * maxn;
        cout << min(leftsq + maxsq, test_max) << endl;

    }
    return 0;
}