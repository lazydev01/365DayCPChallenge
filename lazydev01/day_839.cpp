#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int getFriends(pair<int, int> a, pair<int, int> b, pair<int, int> c){
    if(a.second == b.second || a.second == c.second || b.second == c.second){
        return 0;
    }
    return a.first + b.first + c.first;
}

void threeActivities(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> ap, bp, cp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            ap.push_back(make_pair(x, i));
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            bp.push_back(make_pair(x, i));
        }
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            cp.push_back(make_pair(x, i));
        }
        sort(ap.begin(), ap.end(), greater<>());
        sort(bp.begin(), bp.end(), greater<>());
        sort(cp.begin(), cp.end(), greater<>());
        int maxFriends = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k <3; k++){
                    maxFriends = max(maxFriends, getFriends(ap[i], bp[j], cp[k]));
                } 
            }
        }
        cout << maxFriends << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    threeActivities();
    return 0;
}