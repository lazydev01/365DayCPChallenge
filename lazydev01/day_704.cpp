#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void hardProblem(){
    int t;
    cin >> t;
    while(t--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0;
        ans += min(m, a);
        if(m>a){
            ans+=(min(m-a, c));
            c-=min(m-a, c);
        }
        ans+=min(m, b);
        if(m>b){
            ans+=min(m-b, c);
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    hardProblem();
    return 0;
}