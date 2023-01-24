/*

    Question -> https://www.codechef.com/problems/HELLO

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

        double d;
        int u;
        int n;
        cin >> d >> u >> n;
        double normal_cost = d*u;
        vector<tuple<double, double, int>> vt;
        for(int i=0; i<n; i++){
            tuple<double, double, int> t;
            double m;
            double r;
            int c;
            cin >> m >> r >> c;
            t = make_tuple(m , r, c);
            vt.push_back(t);
        }
        int ans = 0;
        for(int i=0; i<n; i++){
           double current_cost = ((get<0>(vt[i])*u*get<1>(vt[i]))+get<2>(vt[i]))/get<0>(vt[i]);
           if(normal_cost>current_cost){
            ans = i+1;
            normal_cost = current_cost;
           } 
        }
        cout << ans << endl;
    }
    return 0;
}