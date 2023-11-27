#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aliceAndMarks(){
    int x, y;
    cin >> x >> y;
    if(x>=2*y){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void clanExpansion(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, vector<int>> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]].push_back(i+1);
        }
        map<int, int> mp_ans;
        for(auto i : mp){
            int mini = 0;
            for(int j=0; j<i.second.size()-1; j++){
                mini = max(mini, (i.second[j+1] - i.second[j])/2);
            }
            mini = max(mini, i.second[0] - 1);
            mini = max(mini, n - i.second[i.second.size() - 1]);
            mp_ans[i.first] = mini;
        }
        int mini_clan = INT_MAX;
        int ans = 0;
        for(auto i : mp_ans){
            if(mini_clan > i.second){
                mini_clan = i.second;
                ans = i.first;
            }
        }
        cout << ans << " " << mini_clan << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // aliceAndMarks();
    clanExpansion();
    return 0;
}