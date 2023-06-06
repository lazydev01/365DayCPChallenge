/*

    Question -> https://www.codechef.com/problems/ZCOSCH

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

    int n;
    cin >> n;
    if(n>=1 && n<=50){
        cout << 100 << endl;
    }
    else if(n>=51 && n<=100){
        cout << 50 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}