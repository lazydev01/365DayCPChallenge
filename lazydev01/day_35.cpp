/*

Question -> https://www.codechef.com/problems/AGELIMIT

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

        int x, y, a;
        cin >> x >> y >> a;
        if(a>=x && a<y){
          cout << "YES" << endl;
        }
        else{
          cout << "NO" << endl;
        }

    }
    return 0;
}