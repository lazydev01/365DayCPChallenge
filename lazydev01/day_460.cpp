#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rook(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(char c='a'; c<='h'; c++){
            if(c!=s[0]){
                string ans = "";
                ans+=c;
                ans+=s[1];
                cout << ans << endl;
            }
        }
        for(char i='1'; i<='8'; i++){
            if(i!=s[1]){
                string ans = "";
                ans+=s[0];
                ans+=i;
                cout << ans << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    rook();
    return 0;
}