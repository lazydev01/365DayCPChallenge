#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int countWays(int ind, int target, vector<int> &arr){
    if(target == 0){
        return 1;
    }
    if(ind==0){
        return arr[ind]==target;
    }
    int notPick = countWays(ind-1, target, arr);
    int pick = 0;
    if(arr[ind]<=target){
        pick = countWays(ind-1,target-arr[ind], arr);
    }
    return pick + notPick;
}

int findWays(vector<int>& arr, int k)
{
	return countWays(arr.size()-1, k, arr);
}

int mod = 1e9+7;

int countWaysMemoization(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
    if(target==0){
        return 1;
    }
    if(ind==0){
        return arr[0]==target;
    }
    if(dp[ind][target]!=-1){
        return dp[ind][target];
    }
    int notPick = (countWaysMemoization(ind-1, target, arr, dp))%mod;
    int pick = 0;
    if(arr[ind]<=target){
        pick = (countWaysMemoization(ind-1, target-arr[ind], arr, dp))%mod;
    }
    return dp[ind][target] = (pick + notPick)%mod;
}

int findWaysMemoization(vector<int>& arr, int k)
{
    vector<vector<int>> dp(arr.size(), vector<int>(k+1, -1));
	return countWaysMemoization(arr.size()-1, k, arr, dp);
}

int findWaysTabulation(vector<int>& arr, int k)
{
	vector<vector<int>> dp(arr.size(), vector<int>(k+1, 0));
    for(int i=0; i<arr.size(); i++){
        dp[i][0] = 1;
    }
    if(arr[0]<=k){
        dp[0][arr[0]] = 1;
    }
    for(int i=1; i<arr.size(); i++){
        for(int j=1; j<=k; j++){
            dp[i][j] = dp[i-1][j];
            if(arr[i]<=j) {dp[i][j] = (dp[i][j] + dp[i-1][j-arr[i]])%mod;}
        }
    }
    return dp[arr.size()-1][k];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    return 0;
}