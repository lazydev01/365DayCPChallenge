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

    Question -> https://codeforces.com/problemset/problem/1807/A

*/


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b==c){
            cout << "+" << endl;
        }
        else{
            cout << "-" << endl;
        }
    }
    return 0;
}