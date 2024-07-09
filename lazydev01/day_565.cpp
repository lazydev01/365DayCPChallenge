#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void decodeString(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for(int i=n-1; i>=0;){
            if(s[i]=='0'){
                int num = stoi(s.substr(i-2, 2));
                i-=3;
                ans += ('a' + num - 1);
            }
            else{
                int num = s[i] - '0';
                ans += ('a' + num - 1);
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    decodeString();
    return 0;
}