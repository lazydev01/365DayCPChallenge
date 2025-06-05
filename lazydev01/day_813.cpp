#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twoDivisors(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int gcd = __gcd(a, b);
        a = a/gcd;
        b = b/gcd;
        int ans = a * b;
        if(a == 1 || b == 1){
            ans = max(a, b) * max(a, b);
        }
        ans *= gcd;
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    twoDivisors();
    return 0;
}