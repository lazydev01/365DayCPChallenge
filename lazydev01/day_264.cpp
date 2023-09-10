#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fetchMinOperations(int i, int j, string &str1, string &str2){
    if(i<0){
        return j+1;
    }
    if(j<0){
        return i+1;
    }
    if(str1[i]==str2[j]){
        return 0 + fetchMinOperations(i-1, j-1, str1, str2);
    }
    int insert = 1 + fetchMinOperations(i, j-1, str1, str2);
    int del = 1 + fetchMinOperations(i-1, j, str1, str2);
    int update = 1 + fetchMinOperations(i-1, j-1, str1, str2);
    return min(min(insert, del), update);
}

int editDistance(string str1, string str2)
{
    return fetchMinOperations(str1.size()-1, str2.size()-1, str1, str2);
}

int fetchMinOperationsMemoization(int i, int j, string &str1, string &str2, vector<vector<int>> &dp){
    if(i<0) return j+1;
    if(j<0) return i+1;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(str1[i]==str2[j]) return dp[i][j] = 0 + fetchMinOperationsMemoization(i-1, j-1, str1, str2, dp);
    int insert = 1 + fetchMinOperationsMemoization(i, j-1, str1, str2, dp);
    int del = 1 + fetchMinOperationsMemoization(i-1, j, str1, str2, dp);
    int update = 1 + fetchMinOperationsMemoization(i-1, j-1, str1, str2, dp);
    return dp[i][j] = min(min(insert, del), update);
}

int editDistanceMemoization(string str1, string str2){
    vector<vector<int>> dp(str1.size(), vector<int>(str2.size(), -1));
    return fetchMinOperationsMemoization(str1.size()-1, str2.size()-1, str1, str2, dp);
}

int editDistanceTabulation(string str1, string str2){
    vector<vector<int>> dp(str1.size()+1, vector<int>(str2.size()+1, 0));
    for(int i=0; i<=str1.size(); i++){
        dp[i][0] = i;
    }
    for(int j=0; j<=str2.size(); j++){
        dp[0][j] = j;
    }
    for(int i=1; i<=str1.size(); i++){
        for(int j=1; j<=str2.size(); j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }
            else{
                int insert = 1 + dp[i][j-1];
                int del = 1 + dp[i-1][j];
                int update = 1 + dp[i-1][j-1];
                dp[i][j] = min(min(insert, del), update);
            }
        }
    }
    return dp[str1.size()][str2.size()];
}

int editDistanceSpaceOptimization(string str1, string str2){
    vector<int> prev(str2.size()+1);
    vector<int> curr(str2.size()+1);
    for(int j=0; j<=str2.size(); j++){
        prev[j] = j;
    }
    curr[0] = prev[0]+1;
    for(int i=1; i<=str1.size(); i++){
        for(int j=1; j<=str2.size(); j++){
            if(str1[i-1]==str2[j-1]){
                curr[j] = 0 + prev[j-1];
            }
            else{
                int insert = curr[j-1];
                int del = prev[j];
                int update = prev[j-1];
                curr[j] = 1 + min(min(insert, del), update);
            }
        }
        prev = curr;
    }
    return prev[str2.size()];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}