#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gcdAndLcm(){
    int t;
    cin >> t;
    while(t--){
        int a, b, k;
        cin >> a >> b >> k;
        int gcd =__gcd(a, b);
        if(k<=1){
            cout << gcd + min(a, b) << endl;
        }
        else{
            cout << 2 * gcd << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    gcdAndLcm();
    return 0;
}