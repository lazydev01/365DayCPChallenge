#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void doubleEndedStrings(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int ans = m + n;
        for(int i = 0; i<n; i++){
            for(int j = 1; j<=n-i; j++){
                string a_sub = a.substr(i, j);

                if(b.find(a_sub) != string::npos){
                    int ops = (m - j) + (n - j);
                    ans = min(ans, ops);
                }
            }
        }
        cout << ans << endl;
    }
}

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        queue<pair<pair<int, int>, int>> q;
        for(int i = 0; i<n; i++){
            for(int j = 0; j< m; j++){
                if(grid[i][j] == 2){
                    q.push(make_pair(make_pair(i, j), 0));
                }
            }
        }
        int time = 0;
        while(!q.empty()){
            pair<pair<int, int>, int> currEntry = q.front();
            q.pop();
            pair<int, int> currOrange = currEntry.first;
            int currRow = currOrange.first;
            int currCol = currOrange.second;
            visited[currRow][currCol] = true;
            int currTime = currEntry.second;
            vector<int> rows = {0, 1, 0, -1};
            vector<int> cols = {1, 0, -1, 0};
            for(int i = 0; i<4; i++){
                if((currRow + rows[i]) >= 0 && (currRow + rows[i]) < n && (currCol + cols[i]) >= 0 && (currCol + cols[i]) < m && !visited[currRow + rows[i]][currCol + cols[i]] && grid[currRow + rows[i]][currCol + cols[i]] == 1){
                    q.push(make_pair(make_pair(currRow + rows[i], currCol + cols[i]), currTime + 1));
                    grid[currRow + rows[i]][currCol + cols[i]] = 2;
                    time = max(time, currTime + 1);
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return time;
    }
};

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    doubleEndedStrings();
    return 0;
}