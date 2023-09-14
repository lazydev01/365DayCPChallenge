#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMaxProfit(int index, bool buy, int limit, vector<int> &prices){
    if(limit==0) return 0;
    if(index==prices.size()) return 0;
    if(buy){
        return max(-prices[index] + calcMaxProfit(index+1, 0, limit, prices), 0 + calcMaxProfit(index+1, buy, limit, prices));
    }
    else{
        return max(prices[index] + calcMaxProfit(index+1, 1, limit-1, prices),0 + calcMaxProfit(index+1, 0, limit, prices));
    }
}

int maxProfit(vector<int>& prices)
{
    return calcMaxProfit(0, 1, 2, prices);
}

int calcMaxProfitMemoization(int index, bool buy, int limit, vector<int> &prices, vector<vector<vector<int>>> &dp){
    if(limit==0) return 0;
    if(index==prices.size())return 0;
    if(dp[index][buy][limit]!=-1){
        return dp[index][buy][limit];
    }
    if(buy){
        return dp[index][buy][limit] = max(-prices[index]+calcMaxProfitMemoization(index+1, 0, limit, prices, dp), 0 + calcMaxProfitMemoization(index+1, 1, limit, prices, dp));
    }
    return dp[index][buy][limit] = max(prices[index]+calcMaxProfitMemoization(index+1, 1, limit-1, prices, dp), 0 + calcMaxProfitMemoization(index+1, 0, limit, prices, dp));
}

int maxProfitMemoization(vector<int> &prices){
    vector<vector<vector<int>>> dp(prices.size(), vector<vector<int>>(2, vector<int>(3, -1)));
    return calcMaxProfitMemoization(0, 1, 2 , prices, dp);
}

int maxProfitTabulation(vector<int> &prices){
    vector<vector<vector<int>>> dp(prices.size()+1, vector<vector<int>> (2, vector<int>(3, 0)));
    for(int i=prices.size()-1; i>=0; i--){
        for(int j=0; j<=1; j++){
            for(int k=0; k<=2; k++){
                if(j==0){
                    dp[i][j][k] = max(-prices[i]+dp[i+1][1][k], 0 + dp[i+1][j][k]);
                }
                else{
                    dp[i][j][k] = max(prices[i]+dp[i+1][1][k-1], 0+dp[i+1][j][k]);
                }
            }
        }
    }
    return dp[0][1][2];
}

int maxProfitSpaceOptimization(vector<int> &prices){
    vector<vector<int>> ahead(2, vector<int>(3, 0));
    vector<vector<int>> curr(2, vector<int>(3, 0));
    for(int i=prices.size()-1; i>=0; i--){
        for(int j=0; j<=1; j++){
            for(int k=1; k<=2; k++){
                if(j==1){
                    curr[j][k] = max(-prices[i]+ahead[0][k], 0 + ahead[j][k]);
                }
                else{
                    curr[j][k] = max(prices[i]+ahead[1][k-1], 0 + ahead[j][k]);
                }
            }
        }
        ahead = curr;
    }
    return ahead[1][2];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}