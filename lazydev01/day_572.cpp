#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void frogJumping(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> a >> b >> n;
        int ans = 0;
        ans += ((n/2)*a);
        ans -= ((n/2)*b);
        if(n%2){
            ans += a;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    frogJumping();
    return 0;
}