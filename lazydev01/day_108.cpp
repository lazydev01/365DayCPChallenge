/*

    Question -> https://www.codechef.com/problems/NTRIPLETS

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
#define cerr \
    if (0)   \
    cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"

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
        bool flag = false;
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << i << " " << n/i << " " << 1 << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
    }
    return 0;
}