#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void woodcutters(){
    int n;
    cin >> n;
    vector<pair<int, int>> trees;
    for(int i=0; i<n; i++){
        int x, h;
        cin >> x >> h;
        trees.push_back(make_pair(x, h));
    }
    int start = trees[0].first;
    int end = trees[n-1].first;
    int ans = min(2ll, n);
    for(int i=1; i<n-1; i++){
        start = max(start, trees[i-1].first);
        end = trees[i+1].first;
        if(trees[i].first - trees[i].second > start){
            ans++;
        }
        else if(trees[i].first + trees[i].second < end){
            ans++;
            start = trees[i].first + trees[i].second;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    woodcutters();
    return 0;
}