#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void littleNikita(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n<m){
            cout << "NO" << endl;
            continue;
        }
        if((n-m)%2){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    littleNikita();
    return 0;
}