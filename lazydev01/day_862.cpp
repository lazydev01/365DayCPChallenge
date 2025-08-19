#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void bobrittoBandito(){
    int t;
    cin >> t;
    while(t--){
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int lDiff = 0 - l;
        int rDiff = r;
        int diff = n - m;
        if(diff > lDiff){
            diff -= lDiff;
            l = 0;
        }
        else{
            l += diff;
            diff = 0;
        }
        r -= diff;
        cout << l << " " << r << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    bobrittoBandito();
    return 0;
}