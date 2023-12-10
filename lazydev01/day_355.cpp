#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
int mod = 1e9+7;

void beautifulStrings(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto ch : s){
            mp[ch]++;
        }
        int prod = 1;
        for(auto i : mp){
            prod *= (i.second+1);
            prod%=mod;
        }
        cout << prod - 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    beautifulStrings();
    return 0;
}