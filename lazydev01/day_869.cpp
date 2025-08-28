#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void restoreTheWeather(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        vector<pair<int, int>> pa(n);
        vector<pair<int, int>> pb(n);
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            pa[i] = make_pair(x, i);
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            pb[i] = make_pair(b[i], i);
        }
        sort(pa.begin(), pa.end());
        sort(pb.begin(), pb.end());
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[pa[i].second] = b[pb[i].second];
        }
        for(int i = 0; i < n; i++){
            cout << mp[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    restoreTheWeather();
    return 0;
}