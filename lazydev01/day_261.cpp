#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int minWaysToMakeStringPalindrome(string s){
    string t = "";
    for(int i=s.size()-1; i>=0; i--){
        t+=s[i];
    }
    vector<vector<int>> dp(s.size()+1, vector<int>(t.size()+1, 0));
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
    int cmn = dp[s.size()][t.size()];
    return s.size()-cmn;
}

int canYouMake(string &s1, string &s2){
    vector<vector<int>> dp(s1.size()+1, vector<int> (s2.size()+1, 0));
    for(int i=1; i<=s1.size(); i++){
        for(int j=1; j<=s2.size(); j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int cmn = dp[s1.size()][s2.size()];
    return s1.size() + s2.size() - (2*cmn);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    cout << minWaysToMakeStringPalindrome("codingninjas") << endl;
    return 0;
}