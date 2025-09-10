#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void donutShops(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a < c){
            cout << 1 << " ";
        }
        else {
            cout << -1 << " ";
        }
        if((a * b) > c){
            cout << b << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    donutShops();
    return 0;
}