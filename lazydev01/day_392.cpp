#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void tenWordsOfWisdom(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, pair<int, int>>> vp;
        for(int i=0; i<n; i++){
            int a, b;
            cin >> a >> b;
            if(a<=10){
                pair<int, int> p = make_pair(a, b);
                pair<int, pair<int, int>> p1 = make_pair(i+1, p);
                vp.push_back(p1);
            }
        }
        sort(vp.begin(), vp.end(), [ ]( const pair<int, pair<int, int>>& lhs, const pair<int, pair<int, int>>& rhs )
{
   return lhs.second.second>rhs.second.second;
});
    cout << vp[0].first << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    tenWordsOfWisdom();
    return 0;
}