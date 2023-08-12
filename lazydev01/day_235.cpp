#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int exploreMinPath(vector<vector<int>> &triangle, int i, int j){
    if(i==triangle.size()-1){
        return triangle[i][j];
    }
    int down = triangle[i][j] + exploreMinPath(triangle, i+1, j);
    int diagonal = triangle[i][j] + exploreMinPath(triangle, i+1, j+1);
    return min(down, diagonal);
}

int minimumPathSum(vector<vector<int>>& triangle, int n){
	return exploreMinPath(triangle, 0, 0);
}

int exploreMinPathMemoization(vector<vector<int>> &triangle, int i, int j, vector<vector<int>> &dp){
    if(i==triangle.size()-1){
        return triangle[i][j];
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int down = triangle[i][j] + exploreMinPathMemoization(triangle, i+1, j, dp);
    int diagonal = triangle[i][j] + exploreMinPathMemoization(triangle, i+1, j+1, dp);
    return dp[i][j] = min(down, diagonal);
}

int minimumPathSumMemoization(vector<vector<int>>& triangle, int n){
    vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), -1));
    return exploreMinPathMemoization(triangle, 0, 0, dp);
}

int minimumPathSumTabulation(vector<vector<int>>& triangle, int n){
	vector<vector<int>> dp(triangle.size(), vector<int>(triangle.size(), 0));
    for(int i=0; i<triangle[triangle.size()-1].size(); i++){
        dp[triangle.size()-1][i] = triangle[triangle.size()-1][i];
    }
    for(int i=triangle.size()-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            dp[i][j] = min(triangle[i][j] + dp[i+1][j],triangle[i][j] + dp[i+1][j+1]);
        }
    }
    return dp[0][0];
}

int minimumPathSumSpaceOptimization(vector<vector<int>> &triangle, int n){
    vector<int> prev(n, 0);
    for(int i=0; i<n; i++){
        prev[i] = triangle[n-1][i];
    }
    for(int i=n-2; i>=0; i--){
        vector<int> curr(n, 0);
        for(int j=0; j<=i; j++){
            curr[j] = min(triangle[i][j] + prev[j], triangle[i][j] + prev[j+1]);
        }
        prev = curr;
    }
    return prev[0];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}