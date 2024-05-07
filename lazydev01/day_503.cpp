#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void uniqueNumber(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "";
        if(n>45){
            cout << -1 << endl;
            continue;
        }
        int i=9;
        while(n>i && n>0){
            ans+=to_string(i);
            n-=i;
            i--;
        }
        if(n>0){
            ans+=to_string(n);
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    uniqueNumber();
    return 0;
}