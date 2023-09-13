#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

long calcMaxProfit(int index, bool buy, long *values, int n){
    if(index==n){
        return 0;
    }
    if(buy){
        return max(-values[index] + calcMaxProfit(index+1, !buy, values, n), 0 + calcMaxProfit(index+1, buy, values, n));
    }
    else{
        return max(values[index] + calcMaxProfit(index+1, !buy, values, n), 0 + calcMaxProfit(index+1, buy, values, n));
    }
}

long getMaximumProfit(long *values, int n)
{
    return calcMaxProfit(0, true, values, n);
}

long calcMaxProfitMemoization(long index, bool buy, long *values, int n, vector<vector<long>> &dp){
    if(index==n) return 0;
    if(dp[index][buy]!=-1){
        return dp[index][buy];
    }
    if(buy){
       return dp[index][buy] = max(-values[index] + calcMaxProfitMemoization(index+1, 0, values, n, dp), 0 + calcMaxProfitMemoization(index+1,buy, values, n, dp)); 
    }
    else{
        return dp[index][buy] = max(values[index] + calcMaxProfitMemoization(index+1, 1, values, n, dp), 0 + calcMaxProfitMemoization(index+1,buy, values,n, dp));
    }
}

long getMaximumProfitMemoization(long *values, int n)
{
    vector<vector<long>> dp(n, vector<long>(2, -1));
    return calcMaxProfitMemoization(0, 1, values, n, dp);
}

long getMaximumProfitTabulation(long *values, int n)
{
    vector<vector<long>> dp(n+1, vector<long>(2, 0));
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=1; j++){
            if(j==1){
                dp[i][j] = max(-values[i] + dp[i+1][0], 0 + dp[i+1][j]);
            }
            else{
                dp[i][j] = max(values[i] + dp[i+1][1], 0 + dp[i+1][j]);
            }
        }
    }
    return dp[0][1];
}

long getMaximumProfitSpaceOptimization(long *values, int n){
    vector<long> prev(2, 0);
    vector<long> curr(2, 0);
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=1; j++){
            if(j==1){
                curr[j] = max(-values[i] + prev[0], 0 + prev[j]);
            }
            else{
                curr[j] = max(values[i]+prev[1], 0 + prev[j]);
            }
        }
        prev = curr;
    }
    return prev[1];
}

long getMaximumProfitMoreOptimization(long *values, int n){
    long aheadBuy, aheadSell, currBuy, currSell;
    aheadBuy = 0;
    aheadSell = 0;
    for(int i=n-1; i>=0; i--){
        currBuy = max(-values[i] + aheadSell, 0 + aheadBuy);
        currSell = max(values[i] + aheadBuy, 0 + aheadSell);
        aheadBuy = currBuy;
        aheadSell = currSell;
    }
    return aheadBuy;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    return 0;
}