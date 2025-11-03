#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lasers(){
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a < y){
                ans++;
            }
        }
        for(int i = 0; i < m; i++){
            int b;
            cin >> b;
            if(b < x){
                ans++;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    lasers();
    return 0;
}