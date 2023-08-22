#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool findSubset(int n, int k, vector<int> &arr){
    if(k==0){return true;}
    if(n==0){return arr[0]==k;}

    bool notTake = findSubset(n-1,k,arr);
    bool take = false;
    if(arr[n] <= k){
        take = findSubset(n-1,k-arr[n],arr);
    }
    return notTake | take; 
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    return findSubset(n-1,k,arr);
}

bool findSubsetMemoization(int n, int k, vector<int> &arr, vector<vector<int>>&dp){
    if(k==0){return true;}
    if(n==0){return arr[0]==k;}
    if(dp[n][k]!=-1){return dp[n][k];}
    bool notTake = findSubsetMemoization(n-1, k, arr, dp);
    bool take = false;
    if(arr[n]<=k){
        take = findSubsetMemoization(n-1, k-arr[n], arr, dp);
    }
    return dp[n][k] = notTake | take;
}

bool subsetSumToKMemoization(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n, vector<int>(k+1, -1));
    return findSubsetMemoization(n-1, k, arr, dp);
}

bool subsetSumToKTabulation(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n, vector<bool>(k+1, false));
    for(int i=0; i<n; i++){
        dp[i][0] = true;
    }
    if(arr[0]<=k){
        dp[0][arr[0]] = true;
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=k; j++){
            bool notTake = dp[i-1][j];
            bool take = false;
            if(arr[i]<=j){
                take = dp[i-1][j-arr[i]];
            }
            dp[i][j] = notTake|take;
        }
    }
    return dp[n-1][k];
}

bool subsetSumToKSpaceOptimization(int n, int k, vector<int> &arr) {
    vector<bool> prev(k+1, false);
    vector<bool> curr(k+1, false);
    prev[0] = true;
    curr[0] = true;
    if(arr[0]<=k){
        prev[arr[0]]=true;
    }
    for(int i=1; i<n;i++){
        for(int j=1; j<=k; j++){
            bool notTake = prev[j];
            bool take = false;
            if(arr[i]<=j){
                take = prev[j-arr[i]];
            }
            curr[j] = notTake | take;
        }
        prev = curr;
    }
    return prev[k];
}

bool canPartition(vector<int> &arr, int n)
{
	int sum = accumulate(arr.begin(), arr.end(), 0);
	if(sum%2!=0){return false;}
	else return subsetSumToKSpaceOptimization(n, sum/2, arr);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    vector<int> arr = {4,3,2,1};
    cout << subsetSumToKTabulation(4, 5, arr);
    return 0;
}