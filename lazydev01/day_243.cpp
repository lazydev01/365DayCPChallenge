#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fetchMaximumChocolates(int i, int j1, int j2, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){
    int r = grid.size();
    int c = grid[0].size();
    if(j1<0 || j2<0 || j1>=c || j2>=c){
      return -1e-9;
    }
    if(i==r-1){
      if(j1==j2){
        return grid[i][j1];
      }
      return grid[i][j1] + grid[i][j2];
    }
    if(dp[i][j1][j2]!=-1){
      return dp[i][j1][j2];
    }
    int maxi = -1e-9;
    for(int i1=-1; i1<=1; i1++){
      for(int i2=-1; i2<=1; i2++){
        if(j1==j2){
          maxi = max(maxi, grid[i][j1] + fetchMaximumChocolates(i+1, j1 + i1, j2 + i2, grid, dp));
        } 
        else{
          maxi = max(maxi, grid[i][j1] + grid[i][j2] + fetchMaximumChocolates(i+1, j1 + i1, j2 + i2, grid, dp));
        } 
      }
    }
    return dp[i][j1][j2] = maxi;

}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
  int n = grid.size();
  int m = grid[0].size();
  vector<vector<vector<int>>> dp(n, vector<vector<int>>(m ,vector<int>(m, -1)));
  return fetchMaximumChocolates(0, 0, m-1, grid, dp);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}