#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aplusb(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << (s[0]- '0') + (s[2] - '0') << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    aplusb();
    return 0;
}