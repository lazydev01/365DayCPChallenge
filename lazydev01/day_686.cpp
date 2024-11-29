#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void equidistantLetters(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto c : s){
            mp[c]++;
        }
        string ans = "";
        for(auto i : mp){
            if(i.second == 2){
                ans += i.first;
            }
        }
        ans = ans + ans;
        for(auto i : mp){
            if(i.second == 1){
                ans += i.first;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    equidistantLetters();
    return 0;
}