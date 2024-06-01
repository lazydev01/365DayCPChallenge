#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimumVariedNumber(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "";        
        for(char i='9'; i>'0'; i--){
            if(n> (i-'0')){
                ans+=i;
                n-=(i-'0');
            }
            else{
                ans+=to_string(n);
                break;
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

    minimumVariedNumber();
    return 0;
}