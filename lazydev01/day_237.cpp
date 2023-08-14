#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMaximumPathSum(vector<vector<int>> &matrix, int i, int j){
    if(j<0 || j>=matrix[0].size()){
        return -1e9;
    }
    if(i==0){
        return matrix[i][j];
    }
    int straight = matrix[i][j] + calcMaximumPathSum(matrix, i-1, j);
    int leftDiag = matrix[i][j] + calcMaximumPathSum(matrix, i-1, j-1);
    int rightDiag = matrix[i][j] + calcMaximumPathSum(matrix, i-1, j+1);
    return max(max(leftDiag, rightDiag), straight);
    
}

int getMaxPathSum(vector<vector<int>> &matrix)
{
    int maxi = INT_MIN;
    for(int i=0; i<matrix[0].size(); i++){
        maxi = max(maxi, calcMaximumPathSum(matrix, matrix.size()-1, i));
    }
    return maxi;
}

int calcMaximumPathSumMemoization(vector<vector<int>> &matrix, int i, int j, vector<vector<int>> &dp){
    if(j<0 || j>=matrix[0].size()){
        return -1e9;
    }
    if(i==0){
        return matrix[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int straight = matrix[i][j] + calcMaximumPathSumMemoization(matrix, i-1, j, dp);
    int leftDiag = matrix[i][j] + calcMaximumPathSumMemoization(matrix, i-1, j-1, dp);
    int rightDiag = matrix[i][j] + calcMaximumPathSumMemoization(matrix, i-1, j+1, dp);
    return dp[i][j] = max(max(straight, leftDiag), rightDiag);
}

int getMaxPathSumMemoization(vector<vector<int>> &matrix)
{
    
    int maxi = INT_MIN;
    for(int i=0; i<matrix[0].size(); i++){
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), -1));
        maxi = max(maxi, calcMaximumPathSumMemoization(matrix, matrix.size()-1, i, dp));
    }
    return maxi;
}

int getMaxPathSumTabulation(vector<vector<int>> &matrix)
{
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[0].size(); j++){
            if(i==0){
                dp[i][j] = matrix[i][j];
            }
            else{
                int straight = -1e9;
                int leftDiag = -1e9;
                int rightDiag = -1e9;
                if(j>0){
                    leftDiag = matrix[i][j] + dp[i-1][j-1];
                }
                if(j<matrix[0].size()-1){
                    rightDiag = matrix[i][j] + dp[i-1][j+1];
                }
                straight = matrix[i][j] + dp[i-1][j];
                dp[i][j] = max(max(leftDiag, straight), rightDiag);
            }
        }
    }
    int maxi = INT_MIN;
    for(int i=0; i<matrix[0].size(); i++){
        maxi = max(maxi, dp[matrix.size()-1][i]);
    }
    return maxi;
}

int getMaxPathSumSpaceOptimization(vector<vector<int>> &matrix)
{
    vector<int> prev(matrix[0].size(), 0);
    for(int i=0; i<matrix[0].size(); i++){
        prev[i] = matrix[0][i];
    }
    for(int i=1; i<matrix.size(); i++){
        vector<int> curr(matrix[0].size());
        for(int j=0; j<matrix[0].size(); j++){
            int straight = -1e9;
            int leftDiag = -1e9;
            int rightDiag = -1e9;
            if(j>0){
                leftDiag = matrix[i][j] + prev[j-1];
            }
            if(j<matrix[0].size()-1){
                rightDiag = matrix[i][j] + prev[j+1];
            }
            straight = matrix[i][j] + prev[j];
            curr[j] = max(max(straight, leftDiag), rightDiag);
        }
        prev = curr;
    }
    int maxi = INT_MIN;
    for(int i=0; i<prev.size(); i++){
        maxi = max(maxi, prev[i]);
    }
    return maxi;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    return 0;
}