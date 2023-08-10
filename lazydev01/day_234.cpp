#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int sumPath(vector<vector<int>> &grid, int row, int col){
    if(row==0 && col == 0){
        return grid[row][col];
    }
    if(row<0 || col<0){
        return 1e9;
    }
    int up = grid[row][col] + sumPath(grid, row-1, col);
    int left = grid[row][col] + sumPath(grid, row, col-1);
    return min(up, left);
}

int minSumPath(vector<vector<int>> &grid) {
    return sumPath(grid, grid.size()-1, grid[0].size()-1);
}

int sumPathMemoization(vector<vector<int>> &grid, vector<vector<int>> &dp, int row, int col) {
    if(row==0 && col==0){
        return grid[row][col];
    }
    if(row<0 || col<0){
        return 1e9;
    }
    if(dp[row][col]!=-1){
        return dp[row][col];
    }
    int up = grid[row][col] + sumPathMemoization(grid, dp, row-1, col);
    int left = grid[row][col] + sumPathMemoization(grid, dp, row, col-1);
    return dp[row][col] = min(up, left);
}

int minSumPathMemoization(vector<vector<int>> &grid) {
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
    int row = grid.size();
    int col = grid[0].size();
    return sumPathMemoization(grid, dp, row-1, col-1);
}

int minSumPathTabulation(vector<vector<int>> &grid) {
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));
    int row = grid.size();
    int col = grid[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==0 && j==0){
                dp[i][j] = grid[i][j];
            }
            else{
                int up = 1e9, left = 1e9;
                if(i>0){
                    up = grid[i][j] + dp[i-1][j];
                }
                if(j>0){
                    left = grid[i][j] + dp[i][j-1];
                }
                dp[i][j] = min(up, left);
            }
        }
    }
    return dp[row-1][col-1];
}

int minSumPathSpaceOptimization(vector<vector<int>> &grid) {
    vector<int> prev(grid[0].size(), 1e9);
    for(int i=0; i<grid.size(); i++){
        vector<int> curr(grid[0].size());
        for(int j=0; j<grid[0].size(); j++){
            if(i==0 && j==0){
                curr[j] = grid[i][j];
            }
            else if(j==0){
                curr[j] = grid[i][j] + prev[j];
            }
            else{
                curr[j] = min(grid[i][j] + prev[j], grid[i][j] + curr[j-1]);
            }
        }
        prev = curr;
    }
    return prev[grid[0].size()-1];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}