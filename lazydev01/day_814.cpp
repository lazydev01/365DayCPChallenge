#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void trickySum(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int log_n = log2(n);
        int ans = n*(n+1) / 2;
        int pow_2 = 1;
        for(int i=0; i<=log_n; i++){
            pow_2 *= 2;
        }
        pow_2 -= 1;
        ans -= (2 * pow_2);
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    trickySum();
    return 0;
}