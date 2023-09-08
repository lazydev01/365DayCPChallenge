#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"


string shortestSupersequence(string a, string b)
{
	int n = a.size();
    int m = b.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
    for(int i=1; i<=n; i++){
        for(int j=1;j<=m; j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1 + dp[i-1][j];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int i=n-1;
    int j=m-1;
    string ans = "";
    while(i>0 && j>0){
        if(a[i]==b[j]){
            ans += (a[i]);
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            ans+=a[i];
            i--;
        }
        else{
            ans += b[j];
            j--; 
        }
    }
    while(i>0){
        ans += a[i];
        i--;
    }
    while(j>0){
        ans += b[j];
        j--;
    }
    string final = "";
    for(int i=ans.size()-1; i>=0; i--){
        final += ans[i];
    }
    return final;
}

int distinctSubsequences(string &str, string &sub)
{
	
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}