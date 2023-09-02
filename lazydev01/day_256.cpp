#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

long fetchTheCount(int ind, int target, int *denominations){
    if(ind==0){
        if(target%denominations[0]==0){
            return target%denominations[0]==0;
        }
    }
    int notTake = fetchTheCount(ind-1, target, denominations);
    int take = 0;
    if(target>=denominations[ind]){
        take = fetchTheCount(ind, target-denominations[ind], denominations);
    }
    return take+notTake;
}

long countWaysToMakeChange(int *denominations, int n, int value)
{
    return fetchTheCount(n-1, value, denominations);
}

long fetchTheCountMemoization(int index, int target, int* denominations, vector<vector<long>> &dp){
    if(index==0){
        return target%denominations[index]==0;
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    long notTake = fetchTheCountMemoization(index-1 ,target, denominations, dp);
    long take = 0;
    if(denominations[index]<=target){
        take = fetchTheCountMemoization(index, target-denominations[index], denominations, dp);
    }
    return dp[index][target] = notTake + take;
}

long countWaysToMakeChangeMemoization(int *denomination, int n, int value){
    vector<vector<long>> dp(n, vector<long>(value+1, -1));
    return fetchTheCountMemoization(n-1, value, denomination, dp);
}

long countWaysToMakeChangeTabulation(int *denomination, int n, int value){
    vector<vector<long>> dp(n, vector<long>(value+1, 0));
    for(int i=0; i<=value; i++){
        dp[0][i] = i%denomination[0]==0;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=value; j++){
            long notTake = dp[i-1][j];
            long take = 0;
            if(denomination[i]<=j){
                take = dp[i][j-denomination[i]];
            }
            dp[i][j] = take + notTake;
        }
    }
    return dp[n-1][value];
}

long countWaysToMakeChangeSpaceOptimization(int *denomination, int n, int value){
    vector<long> prev(value+1, 0);
    vector<long> curr(value+1, 0);
    for(int i=0; i<=value; i++){
        prev[i] = (i%denomination[0]==0);
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=value; j++){
            long notTake = prev[j];
            long take = 0;
            if(denomination[i]<=j){
                take = curr[j-denomination[i]];
            }
            curr[j] = take + notTake;
        }
        prev = curr;
    }
    return curr[value];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}