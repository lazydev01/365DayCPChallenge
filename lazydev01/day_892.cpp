#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool cmp(pair<int, int> &a, pair<int, int> &b){
    return a.second > b.second;
}

void startup(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for(int i = 0; i < k; i++){
            int b, c;
            cin >> b >> c;
            mp[b] += c;
        }
        vector<pair<int, int>> vp;
        for(auto i : mp){
            vp.push_back(make_pair(i.first, i.second));
        }
        sort(vp.begin(), vp.end(), cmp);
        int ans = 0;
        for(int i = 0; i < min(n, (int) vp.size()); i++){
            ans += vp[i].second;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    startup();
    return 0;
}