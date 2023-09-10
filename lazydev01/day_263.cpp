#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fetchNoOfSubsequences(int i, int j, string &str, string &sub){
    if(j<0) return 1;
    if(i<0) return 0;
    if(str[i]==sub[j]){
        return fetchNoOfSubsequences(i-1, j, str, sub) + fetchNoOfSubsequences(i-1, j-1, str, sub);
    }
    return fetchNoOfSubsequences(i-1, j, str, sub);
}

int distinctSubsequences(string &str, string &sub)
{
	return fetchNoOfSubsequences(str.size()-1, sub.size()-1, str, sub);
}

long long mod = 1e9 + 7;

int fetchNoOfSubsequencesMemoization(int i, int j, string &str, string &sub, vector<vector<int>> &dp){
    if(j<0){
        return 1;
    }
    if(i<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(str[i]==sub[j]){
        return dp[i][j] = (fetchNoOfSubsequencesMemoization(i-1, j-1, str, sub, dp) + fetchNoOfSubsequencesMemoization(i-1, j, str, sub, dp))%mod;
    }
    return dp[i][j] = fetchNoOfSubsequencesMemoization(i-1, j, str, sub, dp);
}

int distinctSubsequencesMemoization(string &str, string &sub){
    vector<vector<int>> dp(str.size()+1, vector<int>(sub.size()+1, -1));
    return fetchNoOfSubsequencesMemoization(str.size()-1, sub.size()-1, str, sub, dp);
}

int distinctSubsequencesTabulation(string &str, string &sub){
    int n = str.size();
    int m = sub.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i=0; i<=n; i++){
        dp[i][0] = 1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(str[i-1]==sub[j-1]){
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])%mod;
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n-1][m-1];
}

int distinctSubsequencesSpaceOptimization(string &str, string &sub){
    int n = str.size();
    int m = sub.size();
    vector<int> prev(m+1);
    vector<int> curr(m+1);
    prev[0] = 1;
    curr[0] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(str[i-1]==sub[j-1]){
                curr[j] = (prev[j-1] + prev[j])%mod;
            }
            else{
                curr[j] = prev[j];
            }
        }
        prev = curr;
    }
    return prev[m];
}

int distinctSubsequencesMoreSpaceOptimization(string &str, string &sub){
    int n = str.size();
    int m = sub.size();
    vector<int> curr(m+1, 0);
    curr[0] = 1;
    for(int i= 1; i<=n; i++){
        for(int j=m; j>0; j--){
            if(str[i-1]==sub[j-1]){
                curr[j] = (curr[j-1] + curr[j])%mod;
            }
        }
    }
    return curr[m];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}