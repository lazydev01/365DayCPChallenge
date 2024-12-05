#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void weGotEverythingCovered(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string single = "";
        for(int i=0; i<k; i++){
            single += (char)('a' + i);
        }
        string ans = "";
        for(int i=0; i<n; i++){
            ans += single;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    weGotEverythingCovered();
    return 0;
}