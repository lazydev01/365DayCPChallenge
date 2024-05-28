#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rudolfAndTheUglyString(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        for(int i=0; i<n-2;){
            if(s.substr(i, 3)=="map"){
                i+=3;
                ans++;
            }
            else if(s.substr(i, 3)=="pie"){
                i+=3;
                ans++;
            }
            else{
                i++;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    rudolfAndTheUglyString();
    return 0;
}