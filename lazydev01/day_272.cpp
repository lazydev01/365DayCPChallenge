#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int longestIncreasingSubsequenceTabulation(int arr[], int n)
{
    vector<vector<int>> dp (n+1, vector<int>(n+2, 0));
    for(int i=n-1; i>=0; i--){
        for(int j=i-1; j>=-1; j--){
            int notTake = 0 + dp[i+1][j+1];
            int take = -1e9;
            if(arr[i]>arr[j]){
                take = 1 + dp[i+1][i+1];
            }
            dp[i][j+1] = max(take, notTake);
        }
    }
    return dp[0][0];
}

int longestIncreasingSubsequenceSpaceOptimization(int arr[], int n){
    vector<int> ahead(n+1, 0);
    vector<int> curr(n+1, 0);
    for(int i=n-1; i>=0; i--){
        for(int j=i-1; j>=-1; j--){
            int notTake = 0 + ahead[j+1];
            int take = -1e9;
            if(arr[i]>arr[j]){
                take = 1 + ahead[i+1];
            }
            curr[j+1] = max(take, notTake);
        }
        ahead = curr;
    }
    return ahead[0];
}

int longestIncreasingSubsequenceTabulationII(int arr[], int n){
    vector<int> dp(n, 1);
    int maxi = -1e9;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i], 1 + dp[j]);
            }
        }
        maxi = max(maxi, dp[i]);
    }
    return maxi;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}