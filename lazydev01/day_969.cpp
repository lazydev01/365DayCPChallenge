#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void doubleStrings(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string, bool> mp;
        vector<string> vs;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            mp[s] = true;
            vs.push_back(s);
        }
        string ans = "";
        for(auto i : vs){
            bool concatExists = false;
            for(int j = 1; j < i.size(); j++){
                if(mp[i.substr(0, j)] && mp[i.substr(j, i.size() - j)]){
                    concatExists = true;
                    break;
                }
            }
            if(concatExists){
                ans += '1';
            }
            else{
                ans += '0';
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    doubleStrings();
    return 0;
}