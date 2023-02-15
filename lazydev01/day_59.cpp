/*

    Question -> https://www.codechef.com/problems/MY1STCONTEST

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

int n,a,b;
cin >> n >> a >> b;
cout << n-a << " " << a+b << endl;
    return 0;
}