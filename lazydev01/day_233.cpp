#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int uniquePaths(int m, int n) {
    vector<int> dp(n, 0);
    dp[0] = 1;
    for(int i=0; i<m; i++){
        vector<int> currRow(n, 0);
        for(int j=0; j<n; j++){
            if(j==0){
                currRow[j] = dp[j];
            }
            else{
                currRow[j] = dp[j] + currRow[j-1];
            }
        }
        dp = currRow;
    }
    cout << dp[n-1] << endl;
}

int countPaths(int i, int j, vector<vector<int>> &mat){
    if(i==0 && j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    if(mat[i][j] == -1){
        return 0;
    }
    int up = 0;
    int left = 0;
    if(i>0){
        up = countPaths(i-1, j, mat);
    }
    if(j>0){
        left = countPaths(i, j-1, mat);
    }
    return up+left;
}

int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    return countPaths(n-1, m-1, mat);
}

int mod = (int)(1e9 + 7);

int countPathsMemoization(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp){
    if(i==0 && j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    if(mat[i][j] == -1){
        return dp[i][j] = 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up = 0;
    int left = 0;
    if(i>0){
        up = countPathsMemoization(i-1, j, mat, dp);
    }
    if(j>0){
        left = countPathsMemoization(i, j-1, mat, dp);
    }
    return dp[i][j] = (up+left)%mod;
}

int mazeObstaclesMemoization(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>> dp(n, vector<int>(m, -1));
    return countPathsMemoization(n-1, m-1, mat, dp);
}

int mazeObstaclesTabulation(int n, int m, vector< vector< int> > &mat) {
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0)dp[0][0] = 1;
            else if(mat[i][j]==-1){dp[i][j] = 0;}
            else{
                int up, left = 0;
                if(i>0) up = dp[i-1][j];
                if(j>0) left = dp[i][j-1];
                dp[i][j] = (up+left)%mod;
            }
        }
    }
    return dp[n-1][m-1];
}

int mazeObstaclesSpaceOptimization(int n, int m, vector< vector< int> > &mat) {
    vector<int> prev(m,0);
    prev[0] = 1;
    for(int i=0; i<n; i++){
        vector<int> curr(m);
        for(int j=0; j<m; j++){
            if(mat[i][j] == -1){
                curr[j] = 0;
            }
            else if(j==0){
                curr[j] = prev[j];
            }
            else{
                curr[j] = (prev[j] + curr[j-1])%mod;
            }
        }
        prev = curr;
    }
    return prev[m-1];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}