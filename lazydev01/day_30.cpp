/*

Question -> https://www.codechef.com/problems/COKE

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n, m, k, l, r;
        cin >> n >> m >> k >> l >> r;
        vector<pair<int, int>> vp;
        for(int i=0; i<n; i++){
            int j;
            int o;
            cin >> j >> o;
            pair<int, int> p = make_pair(j, o);
            vp.push_back(p);
        }
        bool flag = false;
        int minCost = INT_MAX;
        for(int i=0; i<vp.size(); i++){
            if(abs(vp[i].first-k)>0){
                if(vp[i].first>k){
                    vp[i].first-=min(abs(vp[i].first-k), m);
                }
                else{
                    vp[i].first+=min(abs(vp[i].first-k), m);
                }
            }
            else{
                vp[i].first=k;
            }
            if(vp[i].first>=l && vp[i].first<=r){
                if(minCost>vp[i].second){
                    minCost = vp[i].second;
                    flag = true;
                }
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
        else{
            cout << minCost << endl;
        }

    }
    return 0;
}