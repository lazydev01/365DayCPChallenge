#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lunchRush(){
    int n, k;
    cin >> n >> k;
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        int f, t;
        cin >> f >> t;
        if(t > k){
            ans = max(ans, f - t + k);
        }
        else{
            ans = max(ans, f);
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    lunchRush();
    return 0;
}