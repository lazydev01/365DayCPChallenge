#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void divPlusMod(){
    int t;
    cin >> t;
    while(t--){
        int l, r, a;
        cin >> l >> r >> a;
        if(r - (r%a) - 1 >= l && (r%a != a-1)){
            cout << (((r - (r%a) - 1)/a) + a-1) << endl;
        }
        else{
            cout << r/a + r%a << endl;
        }
    }
}

int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    divPlusMod();
    return 0;
}