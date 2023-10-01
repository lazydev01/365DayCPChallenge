#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int mod = 1e9 + 7;

int evaluateExp(string & exp) {
    return calcExp(0, exp.size()-1, 1, exp);
}


long long calcExp(int i, int j, bool isTrue, string &exp){
    if(i>j) return 0;
    if(i==j){
        if(isTrue) return exp[i]=='T';
        else return exp[i]=='F';
    }
    int ways = 0;
    for(int k=i+1; k<=j-1; k+=2){
        int left_true = calcExp(i, k-1, true, exp);
        int left_false = calcExp(i, k-1, false, exp);
        int right_true = calcExp(k+1, j, true, exp);
        int right_false = calcExp(k+1, j, false, exp);
        if(exp[k]=='&'){
            if(isTrue){
                ways = (ways + (left_true * right_true)%mod)%mod;
            }
            else{
                ways = (ways + (left_true * right_false)%mod + (left_false * right_true)%mod + (left_false*right_false)%mod)%mod;
            }
        }
        else if(exp[k]=='|'){
            if(isTrue){
                ways = (ways + (left_true * right_true)%mod + (left_true * right_false)%mod + (left_false * right_true)%mod)%mod;
            }
            else{
                ways = (ways + (left_false * right_false)%mod)%mod;
            }
        }
        else{
            if(isTrue){
                ways = (ways + (left_true * right_false)%mod + (left_false * right_true)%mod)%mod;
            }
            else{
                ways = (ways + (left_true * right_true)%mod + (left_false * right_false)%mod)%mod;
            }
        }
    }
    return ways;
}

int evaluateExpMemoization(string & exp){
    vector<vector<vector<long long>>> dp(exp.size(), vector<vector<long long>>(exp.size(), vector<long long>(2, -1)));
    return calcExpMemoization(0, exp.size()-1, true,exp, dp);
}

long long calcExpMemoization(int i, int j, bool isTrue, string & exp, vector<vector<vector<long long>>> &dp){
    if(i>j) return 0;
    if(i==j){
        if(isTrue){
            return exp[i]=='T';
        }
        else{
            return exp[i]=='F';
        }
    }
    if(dp[i][j][isTrue]!=-1){
        return dp[i][j][isTrue];
    }
    long long ways = 0;
    for(int k=i+1; k<=j-1; k+=2){
        int left_true = calcExpMemoization(i, k-1, true, exp, dp);
        int left_false = calcExpMemoization(i, k-1, false, exp, dp);
        int right_true = calcExpMemoization(k+1, j, true, exp, dp);
        int right_false = calcExpMemoization(k+1, j, false, exp, dp);

        if(exp[k]=='&'){
            if(isTrue){
                ways = (ways + (left_true * right_true)%mod)%mod;
            }
            else{
                ways = (ways + (left_false * right_true)%mod + (left_true * right_false)%mod + (left_false * right_false)%mod)%mod;
            }
        }
        else if(exp[k]=='|'){
            if(isTrue){
                ways = (ways + (left_false * right_true)%mod + (left_true * right_false)%mod + (left_true * right_true)%mod)%mod;
            }
            else{
                ways = (ways + (left_false * right_false)%mod)%mod;
            }
        }
        else{
            if(isTrue){
                ways = (ways + (left_false * right_true)%mod + (left_true * right_false)%mod)%mod;
            }
            else{
                ways = (ways + (left_false * right_false)%mod + (left_true * right_true)%mod)%mod;
            }
        }
    }
    return dp[i][j][isTrue] = ways;
}

int palindromePartitioning(string str)
{
    return calcMinCost(0, str);
}

int calcMinCost(int i, string &str){
    int n = str.size();
    if(i==n){
        return 0;
    }
    string temp_str = "";
    int cost = INT_MAX;
    for(int j=i; j<n; j++){
        temp_str += j;
        if(isPalindrome(temp_str)){
            cost = min(cost, 1 + calcMinCost(j+1, str));
        }
    }
    return cost;
}

bool isPalindrome(string &str){
    for(int i=0; i<str.size()/2; i++){
        if(str[i]!=str[str.size()-1-i]){
            return false;
        }
    }
    return true;
}

int palindromePartitioningMemoization(string str)
{
    vector<int> dp(str.size(), -1);
    return calcMinCostMemoization(0, str, dp) - 1;
}

int calcMinCostMemoization(int i, string &str, vector<int> &dp){
    if(i>=str.size()){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    int cost = INT_MAX;
    string temp_str = "";
    for(int j=i; j<str.size(); j++){
        temp_str += str[j];
        if(isPalindrome(temp_str)){
            cost = min(cost, 1 + calcMinCostMemoization(j+1, str, dp));
        }
    }
    return dp[i] = cost;
}

int palindromePartitioningTabulation(string str)
{
    int n = str.size();
    vector<int> dp(n+1, 0);
    for(int i=n-1; i>=0; i--){
        int cost = INT_MAX;
        string temp_str = "";
        for(int j=i; j<n; j++){
            temp_str += str[j];
            if(isPalindrome(temp_str)){
                cost = min(cost, 1 + dp[j+1]);
            }
        }
        dp[i] = cost;
    }
    return dp[0];
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}