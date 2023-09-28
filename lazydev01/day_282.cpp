#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMaxCoins(int i, int j, vector<int> &a){
    if(i>j) return 0;
    int maxi = INT_MIN;
    for(int k=i; k<=j; k++){
        int total_coins = (a[i-1]*a[k]*a[j+1]) + calcMaxCoins(i, k-1, a) + calcMaxCoins(k+1, j, a);
        maxi = max(maxi, total_coins);
    }
    return maxi;
}

int maxCoins(vector<int>& a)
{
    int n = a.size();
    a.insert(a.begin(), 1);
    a.push_back(1);
	return calcMaxCoins(1, n, a);
}

int calcMaxCoinsMemoization(int i, int j, vector<int> &a, vector<vector<int>> &dp){
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int maxi = INT_MIN;
    for(int k=i; k<=j; k++){
        int cost = (a[i-1] * a[k] * a[j+1]) + calcMaxCoinsMemoization(i, k-1, a, dp) + calcMaxCoinsMemoization(k+1, j, a, dp);
        maxi = max(maxi, cost);
    }
    return dp[i][j] = maxi;
}

int maxCoinsMemoization(vector<int> &a){
    int n = a.size();
    a.insert(a.begin(), 1);
    a.push_back(1);
    vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
    return calcMaxCoinsMemoization(1, n, a, dp);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}