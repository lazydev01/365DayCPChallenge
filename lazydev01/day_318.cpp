#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

    Question -> https://www.codechef.com/problems/FIZZBUZZ2301

*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    if(a>b && a>c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}