#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool stringMatching(int i, int j, string &pattern, string &text){
    if(i<0 && j<0){
        return true;
    }
    if(i<0 && j>=0){
        return false;
    }
    if(i>=0 && j<0){
        for(int x = 0; x<=i; x++){
            if(pattern[x]!='*') return false;
        }
        return true;
    }
    if(pattern[i]==text[j] || pattern[i]=='?'){
        return stringMatching(i-1, j-1, pattern, text);
    }
    if(pattern[i]=='*'){
        return stringMatching(i-1, j, pattern, text) || stringMatching(i, j-1, pattern, text);
    }
    return false;
}

bool wildcardMatching(string pattern, string text)
{
   return stringMatching(pattern.size()-1, text.size()-1, pattern, text);
}

bool stringMatchingMemoization(int i, int j, string &pattern, string &text, vector<vector<int>> &dp){
    if(i<0 && j<0) return true;
    if(i<0 && j>=0) return false;
    if(i>=0 && j<0){
        for(int x=0; x<=i; x++){
            if(pattern[x]!='*'){
                return false;
            }
        }
        return true;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(pattern[i]==text[j] || pattern[i]=='?') return dp[i][j] = stringMatchingMemoization(i-1, j-1, pattern, text, dp);
    if(pattern[i]=='*'){
        return dp[i][j] = stringMatchingMemoization(i-1, j, pattern, text, dp) || stringMatchingMemoization(i, j-1, pattern, text, dp);
    }
    return false;
}

bool wildcardMatchingMemoization(string pattern, string text){
    vector<vector<int>> dp(pattern.size(), vector<int>(text.size(), -1));
    return stringMatchingMemoization(pattern.size()-1, text.size()-1, pattern, text, dp);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}