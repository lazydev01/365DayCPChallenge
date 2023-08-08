#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int explorePaths(int m, int n){
    if(m==0 && n==0)return 1;
    if(m<0 || n<0) return 0;
    int left = explorePaths(m, n-1);
    int up = explorePaths(m-1, n);
    return up + left;
}

int uniquePaths(int m, int n) {
	cout << explorePaths(m-1, n-1) << endl;
}

int explorePathsMemoization(int m, int n, vector<vector<int>> &dp){
    if(m==0 && n==0){
        return 1;
    }
    if(m<0 || n<0){
        return 0;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    int left = explorePaths(m, n-1);
    int up = explorePaths(m-1, n);
    return dp[m][n] = left+up;
}
int uniquePathsMemoization(int m, int n) {
    vector<vector<int>> dp(m, vector<int>(n, -1));
	explorePathsMemoization(m-1, n-1, dp);
    cout << dp[m-1][n-1] << endl;
}

int uniquePathsTabulation(int m, int n) {
	vector<vector<int>> dp(m, vector<int>(n, 0));
    dp[0][0] = 1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i!=0 || j!=0){
                int left = 0;
                int up = 0;
                if(i>0){
                    up = dp[i-1][j];
                }
                if(j>0){
                    left = dp[i][j-1];
                }
                dp[i][j] = up + left;
            }
        }
    }
    cout << dp[m-1][n-1] << endl;
}



int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}