#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void prependAndAppend(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = n;
        string s;
        cin >> s;
        for(int i = 0; i < n/2; i++){
            if(s[i]!=s[n-1-i]){
                ans-=2;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    prependAndAppend();
    return 0;
}