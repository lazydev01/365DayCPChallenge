#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void traverseInAMaze(int row, int col, string path, vector<string>& ans, vector<vector<int>> &maze, vector<vector<bool>> visited){
    if(row==visited.size()-1 && col==visited.size()-1){
        ans.push_back(path);
        return;
    }
    // Downward
    if(row!=visited.size()-1 && maze[row+1][col]==1 && visited[row+1][col]!=true){
        visited[row][col] = true;
        traverseInAMaze(row+1, col, path + 'D', ans, maze,visited);
        visited[row][col] = false;
    }
    // Leftward
    if(col!=0 && maze[row][col-1]==1 && visited[row][col-1]!=true){
        visited[row][col] = true;
        traverseInAMaze(row, col-1, path + 'L', ans, maze,visited);
        visited[row][col] = false;
    }
    // Rightward
    if(col!=visited.size()-1 && maze[row][col+1]==1 && visited[row][col+1]!=true){
        visited[row][col] = true;
        traverseInAMaze(row, col+1, path + 'R', ans, maze,visited);
        visited[row][col] = false;
    }
    // Upward
    if(row!=0 && maze[row-1][col]==1 && visited[row-1][col]!=true){
        visited[row][col] = true;
        traverseInAMaze(row-1, col, path + 'U', ans, maze,visited);
        visited[row][col] = false;
    }
}

void ratInAMaze(){
    int n;
    cin >> n;
    vector<vector<int>> maze;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> maze[i][j];
        }
    }
    string path;
    vector<string> ans;
    if(maze[0][0]==0){
        cout << -1 << endl;
    }
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    traverseInAMaze(0, 0, path, ans, maze, visited);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ratInAMaze();
    return 0;
}
