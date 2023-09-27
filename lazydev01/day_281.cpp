#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMinCost(int i, int j, vector<int> &cuts){
    if(i>j) return 0;
    int mini = INT_MAX;
    for(int ind = i+1; ind < j; ind ++ ){
        int cost = cuts[j+1] - cuts[i-1] + calcMinCost(i, ind-1, cuts) + calcMinCost(ind + 1, j, cuts);
        mini = min(mini, cost);
    }
    return mini;
}

int cost(int n, int c, vector<int> &cuts){
    sort(cuts.begin(), cuts.end());
    cuts.insert(cuts.begin(), 0);
    cuts.push_back(n);
    return calcMinCost(1, cuts.size()-2, cuts);
}

int calcMinCostMemoization(int i, int j, vector<int> &cuts, vector<vector<int>> &dp){
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mini = INT_MAX;
    for(int ind=i; ind<=j; ind++){
        int cost = cuts[j+1]-cuts[i-1] + calcMinCostMemoization(i, ind-1, cuts, dp) + calcMinCostMemoization(ind+1, j, cuts, dp);
        mini = min(mini, cost);
    }
    return dp[i][j] = mini;
}

int costMemoization(int n, int c, vector<int> &cuts){
    sort(cuts.begin(), cuts.end());
    cuts.insert(cuts.begin(), 0);
    cuts.push_back(n);
    vector<vector<int>> dp(n, vector<int> (n, -1));
    return calcMinCostMemoization(1, cuts.size()-2, cuts, dp);
}

int costTabulation(int n, int c, vector<int> &cuts){
    sort(cuts.begin(), cuts.end());
    cuts.insert(cuts.begin(), 0);
    cuts.push_back(n);
    vector<vector<int>> dp(c+1, vector<int>(c+1, 0));
    for(int i=c; i>=1; i--){
        for(int j=1; j<=c; j++){
            if(i>j) continue;
            int mini = INT_MAX;
            for(int k=i; k<=j; k++){
                int cost = cuts[j+1] - cuts[i-1] + dp[i][k-1] + dp[k+1][j];
                mini = min(mini, cost);
            }
            dp[i][j] = mini;
        }
    }
    return dp[1][c];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}