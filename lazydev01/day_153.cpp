/*

  Question -> https://www.codechef.com/problems/LEARNSQL

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

    int r, c, e;
    cin >> r >> c >> e;
    cout << (r+e)*c << endl;
    return 0;
}