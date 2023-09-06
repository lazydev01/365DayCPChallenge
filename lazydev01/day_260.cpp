#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

string printLCS(string s, string t){
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, 0));
    for(int i=0; i<=s.size(); i++){
        dp[i][0] = 0;
    }
    for(int i=0; i<=t.size(); i++){
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
    int n = s.size();
    int m = t.size();
    string str = "";
    while(n>0 && m>0){
        if(s[n-1]==t[m-1]){
            str+=s[n-1];
            n--;
            m--;
        }
        else if(dp[n-1][m]>dp[n][m-1]){
           n--; 
        }
        else{
            m--;
        }
    }
    reverse(str.begin(), str.end());
    return str;
}

int longestCommonSubstring(string s, string t){
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, 0));
    for(int i=0; i<=s.size(); i++){
        dp[i][0] = 0;
    }
    for(int i=0; i<=t.size(); i++){
        dp[0][i] = 0;
    }
    for(int i=1; i<=s.size(); i++){
        for(int j=1; j<=t.size(); j++){
            if(s[i-1]==t[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    int maxi = INT_MIN;
    for(int i=1; i<=s.size(); i++){
        for(int j=1; j<=t.size(); j++){
            maxi = max(maxi , dp[i][j]);
        }
    }
    return maxi;
}

int longestCommonSubstringSpaceOptimization(string &s, string &t){
    vector<int> prev(t.size()+1, 0);
    vector<int> curr(t.size()+1, 0);
    int maxi = 0;
    for(int i=1; i<=s.size(); i++){
        for(int j=1; j<=t.size(); j++){
            if(s[i-1]==t[j-1]){
                curr[j] = 1 + prev[j-1];
                maxi = max(maxi, curr[j]);
            }
            else{
                curr[j] = 0;
            }
        }
        prev = curr;
    }
    return maxi;
}

int longestPalindromicSubsequence(string s){
    string t;
    for(int i=s.size()-1; i>=0; i--){
        t+=s[i];
    }
    vector<int> prev(t.size()+1);
    vector<int> curr(t.size()+1);
    for(int i=1; i<=s.size(); i++){
        for(int j=1; j<=t.size(); j++){
            if(s[i-1]==t[j-1]){
                curr[j] = 1 + prev[j-1];
            }
            else{
                curr[j] = max(prev[j], curr[j-1]);
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

    cout << printLCS("abcde", "bdgek") << endl;
    return 0;
}