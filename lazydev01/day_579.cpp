#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void dontTryToCount(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        bool flag = false;
        int cnt = 6;
        int ans = 0;
        while(cnt--){
            if(x.find(s) != string::npos){
                flag = true;
                break;
            }
            ans++;
            x+=x;
        }
        if(flag){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    dontTryToCount();
    return 0;
}