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

    Question -> https://codeforces.com/contest/1878/problem/B

*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            cout << (2*i)+1 << " ";
        }
        cout << endl;
    }
    return 0;
}