#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void legs(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = n/4;
        if(n%4==2){
            ans++;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    legs();
    return 0;
}