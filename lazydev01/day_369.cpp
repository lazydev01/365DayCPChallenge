#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimizeMaximumSubarraySum(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int ans = x - (2*y);
        if(ans<=1){
            if(x>y+1){
                cout << 2 << endl;
            }
            else{
                cout << 1 << endl;
            }
        }
        else{
            cout << ans << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minimizeMaximumSubarraySum();
    return 0;
}