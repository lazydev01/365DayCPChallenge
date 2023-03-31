/*

    Question -> https://www.codechef.com/problems/DECREM

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

        int l, r;
        cin >> l >> r;
        if(l <= r/2){
            cout << -1 << endl;
        }
        else{
            cout << r << endl;
        }

    }
    return 0;
}