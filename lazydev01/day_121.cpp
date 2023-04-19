/*

    Question -> https://www.codechef.com/problems/CHEFDINE

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

        int n, k;
        cin >> n >> k;
        vector<int> category(n);
        for(int i=0; i<n; i++){
            cin >> category[i];
        }
        vector<int> time(n);
        for(int i=0; i<n; i++){
            cin >> time[i];
        }
        map<int, int> m;
        for(int i=0; i<category.size(); i++){
            if(m.count(category[i])==0){
                m[category[i]]=time[i];
            }
            else{
                m[category[i]]=min(m[category[i]],time[i]);
            }
        }
        if(k>m.size()){
            cout << -1 << endl;
        }
        else{
            vector<int> ans;
            for(auto i : m){
                ans.push_back(i.second);
            }
            sort(ans.begin(), ans.end());
            int total_time = 0;
            for(int i=0; i<k; i++){
                total_time += ans[i];
            }
            cout << total_time << endl;
        }

    }
    return 0;
}