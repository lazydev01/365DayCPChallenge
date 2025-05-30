#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void drTC(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int countOne = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1') countOne++;
        }
        cout << ((countOne - 1) * countOne) + ((countOne + 1) * (n - countOne)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    drTC();
    return 0;
}