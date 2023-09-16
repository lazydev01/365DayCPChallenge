#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int maximumProfit(vector<int> &prices, int n, int k)
{
    vector<vector<int>> curr(2, vector<int>(k+1, 0));
    vector<vector<int>> ahead(2, vector<int>(k+1, 0));
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=1; j++){
            for(int l=1; l<=k; l++){
                if(j==1){
                    curr[j][l] = max(-prices[i] + ahead[0][l], 0 + ahead[j][l]);
                }
                else{
                    curr[j][l] = max(prices[i] + ahead[1][l], 0 + ahead[j][l]);
                }
            }
        }
        ahead = curr;
    }
    return curr[1][k];
}

int calcMaxProfit(int ind, int transactions, vector<int> &prices, int n, int k){
    if(ind==n || transactions==2*k){
        return 0;
    }
    if(transactions%2==0){
        return max(-prices[ind]+calcMaxProfit(ind+1, transactions+1, prices, n, k), 0 + calcMaxProfit(ind+1, transactions, prices, n, k));
    }
    return max(prices[ind]+calcMaxProfit(ind+1, transactions+1, prices, n, k), 0 + calcMaxProfit(ind+1, transactions, prices, n, k));
}

int maximumProfitRecursion(vector<int> &prices, int n, int k){
    return calcMaxProfit(0, 0, prices, n, k);
}

int calcMaxProfitMemoization(int ind, int transactions, vector<int> &prices, int n, int k, vector<vector<int>> &dp){
    if(ind==n || transactions==2*k){
        return 0;
    }
    if(dp[ind][transactions]!=-1){
        return dp[ind][transactions];
    }
    if(transactions%2==0){
        return dp[ind][transactions] = max(-prices[ind]+calcMaxProfitMemoization(ind+1, transactions+1, prices, n, k, dp), 0 + calcMaxProfitMemoization(ind+1, transactions, prices, n, k, dp));
    }
    return dp[ind][transactions] = max(prices[ind]+calcMaxProfitMemoization(ind+1, transactions+1, prices, n, k, dp), 0 + calcMaxProfitMemoization(ind+1, transactions, prices, n, k, dp));
}

int maximumProfitMemoization(vector<int> &prices, int n, int k){
    vector<vector<int>> dp(n+1, vector<int>(2*k+1, -1));
    return calcMaxProfitMemoization(0, 0, prices, n, k ,dp);
}

int maximumProfitTabulation(vector<int> &prices, int n, int k){
    vector<vector<int>> dp(n+1, vector<int>(2*k+1, 0));
    for(int i=n-1; i>=0; i--){
        for(int j=2*k-1; j>=0; j--){
            if(j%2==0){
                dp[i][j] = max(-prices[i] + dp[i+1][j+1], 0 + dp[i+1][j]);
            }
            else{
                dp[i][j] = max(prices[i] + dp[i+1][j+1], 0 + dp[i+1][j]);
            }
        }
    }
    return dp[0][0];
}

int maximumProfitSpaceOptimization(vector<int> &prices, int n, int k){
    vector<int> ahead(2*k+1, 0);
    vector<int> curr(2*k+1, 0);
    for(int i=n-1; i>=0; i--){
        for(int j=2*k-1; j>=0; j--){
            if(j%2==0){
                curr[j] = max(-prices[i] + ahead[j+1], 0 + ahead[j]);
            }
            else{
                curr[j] = max(prices[i] + ahead[j+1], 0 + ahead[j]);
            }
        }
        ahead = curr;
    }
    return curr[0];
}

int calcStockProfit(int ind, bool buy, vector<int> &prices){
    if(ind>=prices.size()){
        return 0;
    }
    if(buy){
        return max(-prices[ind] + calcStockProfit(ind+1, !buy, prices), 0+ calcStockProfit(ind+1, buy, prices));
    }
    return max(prices[ind] + calcStockProfit(ind+2, !buy, prices), 0+ calcStockProfit(ind+1, buy, prices));
}

int stockProfit(vector<int> &prices){
    return calcStockProfit(0, 1, prices);
}

int calcStockProfitMemoization(int ind, bool buy, vector<int> &prices, vector<vector<int>> &dp){
    if(ind>=prices.size()){
        return 0;
    }
    if(dp[ind][buy]!=-1) return dp[ind][buy];
    if(buy){
        return dp[ind][buy] = max(-prices[ind] + calcStockProfitMemoization(ind+1, !buy, prices, dp), 0 + calcStockProfitMemoization(ind+1, buy, prices, dp));
    }
    return dp[ind][buy] = max(prices[ind]+calcStockProfitMemoization(ind+2, !buy, prices, dp), 0 + calcStockProfitMemoization(ind+1, buy, prices,dp));
}

int stockProfitMemoization(vector<int> &prices){
    vector<vector<int>> dp(prices.size(), vector<int>(2, -1));
    return calcStockProfitMemoization(0, 1, prices, dp);
}

int stockProfitTabulation(vector<int> &prices){
    vector<vector<int>> dp(prices.size(), vector<int> (2, 0));
    for(int i=prices.size()-1; i>=0; i--){
        for(int j=0; j<=1; j++){
            if(j==1){
                dp[i][j] = max(-prices[i] + dp[i+1][0], 0 + dp[i+1][j]);
            }
            else{
                dp[i][j] = max(prices[i] + dp[i+2][1], 0 + dp[i+1][j]);
            }
        }
    }
    return dp[0][1];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}