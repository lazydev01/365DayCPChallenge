/*

    Question -> https://codechef.com/problems/TASTEDEC

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

        int x, y;
        cin >> x >> y;
        if(x*2 == y*5){
            cout << "EITHER" << endl;
        }
        else if(x*2 < y*5){
            cout << "CANDY" << endl;
        }
        else{
            cout << "CHOCOLATE" << endl;
        }

    }
    return 0;
}