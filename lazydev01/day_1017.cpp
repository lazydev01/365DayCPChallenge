#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void divanAndANewProject(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> vp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            vp.push_back(make_pair(x, i+1));
        }
        sort(vp.begin(), vp.end(), greater<pair<int, int>>());
        vector<int> ans(n+1);
        ans[0] = 0;
        int distance = 0;
        int right = 1;
        int left = -1;
        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                ans[vp[i].second] = right;
                distance += abs(right) * vp[i].first * 2;
                right++;
            }
            else{
                ans[vp[i].second] = left;
                distance += abs(left) * vp[i].first * 2;
                left--;
            }
        }
        cout << distance << endl;
        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
}

/*

10 3
8 2
6 4
3 1
1 5


*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    divanAndANewProject();
    return 0;
}