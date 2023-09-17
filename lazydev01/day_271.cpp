#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMaxProfit(int index, bool buy, vector<int> &prices, int fee){
    if(index==prices.size()) return 0;
    if(buy){
        return max(-prices[index] - fee + calcMaxProfit(index+1, !buy, prices, fee), 0 + calcMaxProfit(index+1, buy, prices, fee));
    }
    return max(prices[index] + calcMaxProfit(index+1, !buy, prices, fee), 0 + calcMaxProfit(index+1, buy, prices, fee));
}

int maximumProfit(vector<int> &prices, int n, int fee)
{
	return calcMaxProfit(0, true, prices, fee);
}

int calcLIS(int index, int prev, int arr[], int n){
    if(index==n) return 0;
    if(arr[index]>prev){
        int take = 1 + calcLIS(index+1, arr[index], arr,n);
        int notTake = 0 + calcLIS(index+1, prev, arr, n);
        return max(take, notTake);
    }
    return calcLIS(index+1, prev, arr, n);

}

int longestIncreasingSubsequence(int arr[], int n)
{
    return calcLIS(0, -1e6, arr, n);
}

int calcLISMemoization(int ind, int prevInd, int arr[], int n, vector<vector<int>> &dp){
    if(ind==n)return 0;
    if(dp[ind][prevInd+1]!=-1) return dp[ind][prevInd+1];
    int take = -1e9;
    if(prevInd==-1 || arr[ind]>arr[prevInd]){
        take = 1 + calcLISMemoization(ind+1, ind, arr, n, dp);
    }
    int notTake = 0 + calcLISMemoization(ind+1, prevInd, arr, n, dp);
    return dp[ind][prevInd+1] = max(take, notTake);
}

int longestIncreasingSubsequenceMemoization(int arr[], int n){
    vector<vector<int>> dp(n, vector<int>(n+1, -1));
    return calcLISMemoization(0, -1, arr, n, dp);
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}