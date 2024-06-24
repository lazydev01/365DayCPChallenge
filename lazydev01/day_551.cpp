#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void badUglyNumbers(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "";
        if(n==1){
            cout << -1 << endl;
            continue;
        }
        else{
            ans+='2';
            for(int i=1; i<n; i++){
                ans+='3';
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    badUglyNumbers();
    return 0;
}