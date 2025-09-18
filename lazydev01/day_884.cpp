#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void freeCash(){
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    int maxCount = 0;
    for(int i = 0; i < n; i++){
        int h, m;
        cin >> h >> m;
        mp[make_pair(h, m)]++;
        maxCount = max(maxCount, mp[{h, m}]);
    }
    cout << maxCount << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    freeCash();
    return 0;
}