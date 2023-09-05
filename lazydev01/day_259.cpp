#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fetchLCS(int ind1, int ind2, string &s, string &t, vector<vector<int>> &dp){
    if(ind1<0 || ind2<0){
        return 0;
    }
    if(dp[ind1][ind2]!=-1){
        return dp[ind1][ind2];
    }
    if(s[ind1]==t[ind2]){
        return dp[ind1][ind2] = 1 + fetchLCS(ind1-1, ind2-1, s, t, dp);
    }
    return dp[ind1][ind2] = max(fetchLCS(ind1-1, ind2, s, t, dp), fetchLCS(ind1, ind2-1, s, t, dp));
}

int lcsMemoization(string s, string t)
{
    vector<vector<int>> dp(s.size(), vector<int>(t.size(), -1));
	return fetchLCS(s.size()-1, t.size()-1, s, t, dp);
}

int lcsTabulation(string s, string t)
{
	vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, 0));
    for(int i=0; i<s.size(); i++){
            dp[i][0] = 0;
    }
    for(int i=0; i<t.size(); i++){
            dp[0][i] = 0;
    }
    for(int i=1; i<=s.size(); i++){
        for(int j=1; j<=t.size(); j++){
            if(s[i-1]==t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[s.size()][t.size()];
}

int lcsSpaceOptimization(string s, string t){
    vector<int> prev(t.size()+1, 0);
    vector<int> curr(t.size()+1, 0);
    for(int i=0; i<=t.size(); i++){
        prev[i] = 0;
    }
    curr[0] = 0;
    for(int i=1; i<=s.size(); i++){
        for(int j=1; j<=t.size(); j++){
            if(s[i-1]==t[j-1]){
                curr[j] = 1 + prev[j-1];
            }
            else{
                curr[j] = max(curr[j-1], prev[j]);
            }
        }
        prev = curr;
    }
    return curr[t.size()];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}