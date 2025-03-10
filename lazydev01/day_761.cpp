#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void theCorridorOrThereAndBackAgain(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> vp;
        for(int i=0; i<n; i++){
            int d, s;
            cin >> d >> s;
            vp.push_back(make_pair(d, s));
        }
        int minDist = INT_MAX;
        for(auto i : vp){
            minDist = min(minDist, i.first + (i.second - 1) / 2);
        }
        cout << minDist << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    theCorridorOrThereAndBackAgain();
    return 0;
}