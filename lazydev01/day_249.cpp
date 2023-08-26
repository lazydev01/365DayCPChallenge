#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fetchMaxVal(int ind, int capacity, vector<int> &weight, vector<int> &value){
    if(ind==0){
        if(capacity>=weight[ind]){
            return value[ind];
        }
        return 0;
    }
    int notTake = 0 + fetchMaxVal(ind-1, capacity, weight, value);
    int take = INT_MIN;
    if(capacity>=weight[ind]){
        take = value[ind] + fetchMaxVal(ind-1, capacity - weight[ind], weight, value);
    }
    return max(take, notTake);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    return fetchMaxVal(n-1, maxWeight, weight, value);
}

int fetchMaxValMemoization(int ind, int capacity, vector<int> &weight, vector<int> &value, vector<vector<int>> &dp){
    if(ind==0){
        if(capacity>=weight[ind]){
            return value[ind];
        }
        return 0;
    }
    if(dp[ind][capacity]!=-1){
        return dp[ind][capacity];
    }
    int notTake = 0 + fetchMaxValMemoization(ind-1, capacity, weight, value, dp);
    int take = INT_MIN;
    if(capacity>=weight[ind]){
        take = value[ind] + fetchMaxValMemoization(ind-1, capacity-weight[ind], weight, value, dp);
    }
    return dp[ind][capacity] = max(take, notTake);
}

int knapsackMemoization(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    vector<vector<int>> dp(n, vector<int> (maxWeight + 1, -1));
    return fetchMaxValMemoization(n-1, maxWeight, weight, value, dp);
}

int knapsackTabulation(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
    vector<vector<int>> dp(n, vector<int>(maxWeight + 1, 0));
    for(int i=weight[0]; i<=maxWeight; i++){
        dp[0][i] = value[0];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=maxWeight; j++){
            int notTake = 0 + dp[i-1][j];
            int take = INT_MIN;
            if(j >= weight[i]){
                take = value[i] + dp[i-1][j-weight[i]];
            }
            dp[i][j] = max(take, notTake);
        }
    }
    return dp[n-1][maxWeight];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}