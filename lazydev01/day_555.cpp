#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void ternaryString(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<pair<char, int>> vp;
        int ans = INT_MAX;
        for(char c : s){
            if(vp.size()==0 || vp.back().first!=c){
                vp.push_back(make_pair(c, 1));
            }
            else{
                vp.back().second++;
            }
        }
        for(int i = 1; i< vp.size()-1; i++){
            if(vp[i-1].first!=vp[i+1].first){
                ans = min(ans, vp[i].second+2);
            }
        }
        if(ans==INT_MAX){
            cout << 0 << endl;
        }
        else{
            cout << ans << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ternaryString();
    return 0;
}