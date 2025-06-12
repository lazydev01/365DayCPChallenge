#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void doubleEndedStrings(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int ans = m + n;
        for(int i = 0; i<n; i++){
            for(int j = 1; j<=n-i; j++){
                string a_sub = a.substr(i, j);

                if(b.find(a_sub) != string::npos){
                    int ops = (m - j) + (n - j);
                    ans = min(ans, ops);
                }
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    doubleEndedStrings();
    return 0;
}