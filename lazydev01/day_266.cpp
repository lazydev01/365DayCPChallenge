#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool wildcardMatchingTabulation(string pattern, string text)
{
    vector<vector<bool>> dp(pattern.size()+1, vector<bool>(text.size() + 1, false));
    dp[0][0] = true;
    int n = pattern.size();
    int m = text.size();
    for(int i=1; i<=n; i++){
        bool flag = false;
        for(int x = 1; x<=i; x++){
            if(pattern[x-1]!='*'){
                dp[i][0] = false;
                flag = true;
                break;
            }
        }
        if(!flag){
            dp[i][0] = true;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(pattern[i-1]==text[j-1] || pattern[i-1]=='?'){
                dp[i][j] = dp[i-1][j-1];
            }
            else if(pattern[i-1]=='*'){
                dp[i][j] = dp[i-1][j] || dp[i][j-1];
            }
            else{
                dp[i][j] = false;
            }
        }
    }
    return dp[n][m];
}

bool wildcardMatchingSpaceOptimization(string pattern, string text){
    int n = pattern.size();
    int m = text.size();
    vector<bool> prev(m+1, false);
    vector<bool> curr(m+1, false);
    prev[0] = true;
    for(int j=1; j<=m; j++){
        prev[j] = false;
    }
    bool flag = true;
    if(pattern[0]!='*'){
        flag = false;
    }
    curr[0] = flag;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(pattern[i-1]==text[j-1] || pattern[i-1]=='?'){
                curr[j] = prev[j-1];
            }
            else if(pattern[i-1]=='*'){
                curr[j] = prev[j] || curr[j-1];
            }
            else{
                curr[j] = false;
            }
        }
        prev = curr;
    }
    return curr[m];
}

int maximumProfit(vector<int> &arr){
    int n = arr.size();
    int mini = arr[0];
    int profit = 0;
    for(int i=1; i<n; i++){
        int currProfit = arr[i]-mini;
        if(profit<currProfit){
            profit = currProfit;
        }
        mini = min(mini, arr[i]);
    }
    return profit;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}