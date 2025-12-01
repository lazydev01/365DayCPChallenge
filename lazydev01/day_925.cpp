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
    if(a.second < b.second){
        return true;
    }
    if(b.second == a.second){
        if(a.first > b.first){
            return true;
        }
    }
    return false;
}

void helmetsInNightLight(){
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for(int i = 0;  i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector<pair<int, int>> vp;
        for(int i = 0; i < n; i++){
            vp.push_back(make_pair(a[i], b[i]));
        }
        sort(vp.begin(), vp.end(), cmp);
        int ans = 0;
        int cnt = 0;
        ans += p;
        cnt++;
        for(int i = 0; i < n; i++){
            if(vp[i].second >= p){
                break;
            }
            if(cnt >= n){
                break;
            }
            ans += (vp[i].second * min(vp[i].first, n - cnt));
            cnt += min(vp[i].first, n - cnt);
        }
        for(int i = 0; i < n - cnt; i++){
            ans += p;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    helmetsInNightLight();
    return 0;
}

/*

5 4
2 2 3 1 1
1 1 3 3 2

*/