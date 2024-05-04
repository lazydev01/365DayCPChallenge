#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void iceCream(){
    int x, y;
    cin >> x >> y;
    if(y>=(2*x)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void gameXi(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> batsman(n);
        vector<int> bowler(m);
        for(int i=0; i<n; i++){
            cin >> batsman[i];
        }
        for(int i=0; i<m; i++){
            cin >> bowler[i];
        }
        if(n<4 || m<4){
            cout << -1 << endl;
            continue;
        }
        if(n+m<11){
            cout << -1 << endl;
            continue;
        }
        sort(batsman.begin(), batsman.end(), greater<int>());
        sort(bowler.begin(), bowler.end(), greater<int>());
        vector<int> final_list;
        for(int i=4; i<batsman.size(); i++){
            final_list.push_back(batsman[i]);
        }
        for(int i=4; i<bowler.size(); i++){
            final_list.push_back(bowler[i]);
        }
        sort(final_list.begin(), final_list.end(), greater<int>());
        int ans = 0;
        for(int i=0; i<4; i++){
            ans+=batsman[i];
        }
        for(int i=0; i<4; i++){
            ans+=bowler[i];
        }
        for(int i=0; i<3; i++){
            ans+=final_list[i];
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // iceCream();
    gameXi();
    return 0;
}