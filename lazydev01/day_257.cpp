#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fetchMaxValue(int index, int target, vector<int> &profit, vector<int> &weight){
    if(index==0){
        return profit[index]*(target/weight[0]);
    }
    int notTake = fetchMaxValue(index-1, target, profit, weight);
    int take = 0;
    if(weight[index]<=target){
        take = profit[index] + fetchMaxValue(index, target-weight[index], profit, weight);
    }
    return max(notTake, take);
}

int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    return fetchMaxValue(n-1, w, profit, weight);
}

int fetchMaxValueMemoization(int index, int target, vector<int> &profit, vector<int> &weight, vector<vector<int>> &dp){
    if(index==0){
        return profit[index]*(target/weight[index]);
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    int notTake = fetchMaxValueMemoization(index-1, target, profit, weight, dp);
    int take = 0;
    if(weight[index]<=target){
        take = profit[index] + fetchMaxValueMemoization(index, target-weight[index], profit, weight, dp);
    }
    return dp[index][target] = max(notTake, take);
}

int unboundedKnapsackMemoization(int n, int w, vector<int> &profit, vector<int> &weight){
    vector<vector<int>> dp(n, vector<int> (w+1, -1));
    return fetchMaxValueMemoization(n-1, w, profit, weight, dp);
}

int unboundedKnapsackTabulation(int n, int w, vector<int> &profit, vector<int> &weight){
    vector<vector<int>> dp(n, vector<int>(w+1, 0));
    for(int i=0; i<=w; i++){
        dp[0][i] = (i/weight[0])*(profit[0]);
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=w; j++){
            int notTake = dp[i-1][j];
            int take = 0;
            if(weight[i]<=j){
                take = profit[i] + dp[i][j-weight[i]];
            }
            dp[i][j] = max(take, notTake);
        }
    }
    return dp[n-1][w];
}

int unboundedKnapsackSpaceOptimization(int n, int w, vector<int> &profit, vector<int> &weight){
    vector<int> prev(w+1, 0);
    vector<int> curr(w+1, 0);
    for(int i=0; i<=w; i++){
        prev[i] = profit[0]*(i/weight[0]);
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=w; j++){
            int notTake = prev[j];
            int take = 0;
            if(weight[i]<=j){
                take = curr[j-weight[i]];
            }
            curr[j] = max(take, notTake);
        }
        prev = curr;
    }
    return curr[w];
}

int unboundedKnapsackMoreSpaceOptimization(int n, int w, vector<int> &profit, vector<int> &weight){
    vector<int> curr(w+1, 0);
    for(int i=0; i<=w; i++){
        curr[i] = (profit[0])*(i/weight[0]);
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=w; j++){
            int notTake = curr[j];
            int take = 0;
            if(weight[i]<=j){
                take = profit[i] + curr[j-weight[i]];
            }
            curr[j] = max(take, notTake);
        }
    }
    return curr[w];
}

int fetchMaxCost(int index, int length, vector<int> &price){
    if(index==1){
        return length*price[index];
    }
    int notCut = fetchMaxCost(index-1, length, price);
    int cut = 0;
    if(length>=(index)){
        cut = price[index-1]+fetchMaxCost(index, length-index, price);
    }
    return max(cut, notCut);
}

int cutRod(vector<int> &price, int n)
{
	return fetchMaxCost(n, n, price);
}

int fetchMaxCostMemoization(int index, int remainingLen, vector<int> &price, vector<vector<int>> &dp){
    if(index==0){
        return (remainingLen * price[index]);
    }
    if(dp[index][remainingLen]!=-1){
        return dp[index][remainingLen];
    }
    int notCut = fetchMaxCostMemoization(index-1, remainingLen, price, dp);
    int cut = 0;
    if((index+1)<=remainingLen){
        cut = price[index] + fetchMaxCostMemoization(index, remainingLen-(index+1), price, dp);
    }
    return dp[index][remainingLen] = max(cut, notCut);
}

int cutRodMemoization(vector<int> &price, int n){
    vector<vector<int>> dp(n, vector<int> (n+1, -1));
    return fetchMaxCostMemoization(n-1, n, price, dp);
}

int cutRodTabulation(vector<int> &price, int n){
    vector<vector<int>> dp(n, vector<int>(n+1, 0));
    for(int i=0; i<=n; i++){
        dp[0][i] = price[0]*i;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=n; j++){
            int notCut = dp[i-1][j];
            int cut = 0;
            if((i+1)<=j){
                cut = price[i] + dp[i][j-(i+1)];
            }
            dp[i][j] = max(cut, notCut);
        }
    }
    return dp[n-1][n];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}