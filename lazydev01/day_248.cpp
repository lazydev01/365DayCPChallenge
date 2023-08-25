#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int mod = 1e9+7;

int findWaysSpaceOptimization(vector<int>& arr, int k)
{
	int n = arr.size();
    vector<int> prev(k+1, 0);
    vector<int> curr(k+1, 0);
    prev[0] = 1;
    curr[0] = 1;
    if(arr[0]<=k){
        prev[arr[0]] = 1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=k; j++){
            int notTake = prev[j];
            int take = 0;
            if(arr[i]<=j){
                take = prev[j-arr[i]];
            }
            curr[j] = (take + notTake)%mod;
        }
        prev = curr;
    }
    return prev[k];
}

int mod = 1e9 + 7;

int countWays(int ind, int target, vector<int> &arr){
    if(ind==0){
        if(target==0 && arr[0]==0) return 2;
        if(target==0 || arr[0]==target) return 1;
        return 0;
    }
    int notTake = countWays(ind-1, target, arr);
    int take = 0;
    if(arr[ind]<=target){
        take = countWays(ind-1, target-arr[ind], arr);
    }
    return (take + notTake)%mod;
}

int countPartitions(int n, int d, vector<int> &arr) {
    int totSum=0;
    for(auto &ele : arr) totSum += ele;
    if(totSum-d< 0 || (totSum-d)%2==1) return 0;
    return countPartitions(n-1,(totSum-d)/2 , arr);
}

int countWaysMemoization(int ind, int target, vector<int> &arr, vector<vector<int>> &dp){
    if(ind==0){
        if(arr[0]==0 &&  target==0) return 2;
        if(arr[0]==0 || target==arr[0]) return 1;
        return 0;
    }
    if(dp[ind][target]!=-1){
        return dp[ind][target];
    }
    int notTake = countWaysMemoization(ind-1, target, arr, dp);
    int take = 0;
    if(arr[ind]<=target){
        take = countWaysMemoization(ind-1, target-arr[ind], arr, dp);
    }
    return (notTake + take)%mod;
}

int countPartitionsMemoization(int n, int d, vector<int> &arr) {
    int totSum = 0;
    for(int i=0; i<arr.size(); i++) totSum += arr[i];
    if(totSum-d < 0 || (totSum-d)%2==1) return 0;
    vector<vector<int>> dp(n, vector<int>(((totSum-d)/2)+1, -1));
    return countWaysMemoization(n-1, (totSum - d)/2, arr, dp);
}

int countPairsTabulation(int n, int d, vector<int> arr){
    int totSum = 0;
    for(int i=0; i<n; i++){
        totSum += arr[i];
    }
    if(totSum-d<0 || (totSum-d)%2==1){
        return 0;
    }
    int target = (totSum - d)/2;
    vector<vector<int>> dp(n, vector<int>(target + 1, 0));
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}