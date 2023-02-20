/*

    Question -> https://www.codechef.com/problems/QUIZPLAG

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

        int n, m, k;
        cin >> n >> m >> k;
        map<int, int> ma;
        vector<int> ans;
        for(int i=0; i<k; i++){
            int j;
            cin >> j;
            ma[j]++;
        }
        for(auto i: ma){
            if(i.first <=n && i.second > 1){
                ans.push_back(i.first);
            }
        }
        cout << ans.size() << " ";
        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}