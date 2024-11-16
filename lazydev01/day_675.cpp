#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findPath(int n, vector<vector<int>> &maze, vector<vector<bool>> &visited, int i, int j, vector<string> &ans, string currPath, map<char, pair<int, int>> &directions){
    if(i==n-1 && j==n-1 && maze[i][j]==1){
        ans.push_back(currPath);
        return;
    }
    if(maze[i][j]==0){
        return;
    }
    visited[i][j] = true;
    for(auto dir: directions){
        int nextRow = i + dir.second.first;
        int nextCol = j + dir.second.second;
        if(nextCol>=0 && nextCol<n && nextRow>=0 && nextRow<n && maze[nextRow][nextCol] == 1 && !visited[nextRow][nextCol]){
            findPath(n, maze, visited, nextRow, nextCol, ans, currPath + dir.first, directions);
        }
    }
    visited[i][j] = false;    
}

void ratInAMaze(){
    int n;
    cin >> n;
    vector<vector<int>> maze(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> maze[i][j];
        }
    }
    vector<string> ans;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    map<char, pair<int, int>> directions = {{'U', make_pair(-1, 0)}, {'L', make_pair(0, -1)}, {'R', make_pair(0, 1)}, {'D', make_pair(1, 0)}};
    findPath(n, maze, visited, 0, 0, ans, "", directions);
    for(string s : ans){
        cout << s << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ratInAMaze();
    return 0;
}

/*

4
1 0 0 0
1 1 0 1
1 1 0 0
0 1 1 1

2
1 0
1 0







*/