#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int maximumSubarray(vector<int> &num, int k){
    return calcMaxSum(0, k, num);
}

long long calcMaxSum(int index, int k, vector<int> &num){
    if(index>=num.size()) return 0;
    int max_el = INT_MAX;
    long long max_sum = 0;
    for(int j=index; j<min((int)num.size(), index + k); j++){
        max_el = max(max_el, num[j]);
        max_sum = max(max_sum, max_el*(j-index+1) + calcMaxSum(j+1, k, num));
    }
    return max_sum;
}

int maximumSubarrayMemoization(vector<int> &num, int k){
    vector<int> dp(num.size()+1, -1);
    return calcMaxSumMemoization(0, k, num, dp);
}

long long calcMaxSumMemoization(int index, int k, vector<int> &num, vector<int> &dp){
    if(index>=num.size()) return 0;
    if(dp[index]!=-1) return dp[index];
    int max_sum = 0;
    int max_el = INT_MIN;
    for(int i=index; i<min((int)num.size(), index + k); i++){
        max_el = max(max_el, num[i]);
        max_sum = max(max_sum, (max_el * (i-index+1)) + calcMaxSumMemoization(i+1, k, num, dp));
    }
    return dp[index] = max_sum;
}

int maximumSubarrayTabulation(vector<int> &num, int k){
    int n = num.size();
    vector<int> dp(n+1, 0);
    for(int i=n-1; i>=0; i--){
        int max_ans = 0;
        int max_el = INT_MIN;
        for(int j=i; j<min(n, i+k); j++){
            max_el = max(max_el, num[j]);
            max_ans = max(max_ans, (max_el * (j-i+1)) + dp[j+1]);
        }
        dp[i] = max_ans;
    }
    return dp[0];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}