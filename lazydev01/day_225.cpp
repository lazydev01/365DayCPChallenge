#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fib(int n, vector<int> &dp){
    if(dp[n]!= -1){
        return dp[n];
    }
    else{
        dp[n] = fib(n-1, dp) + fib(n-2, dp);
        return dp[n];
    }
}

void fibonacciMemoization(){
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    dp[1] = 0;
    dp[2] = 1;
    cout << fib(n, dp) << endl;
}

void fibonacciTabulation(){
    int n;
    cin >> n;
    vector<int> dp(n+1);
    dp[1] = 0;
    dp[2] = 1;
    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;
}

void fibonacciWithoutSpace(){
    int n;
    cin >> n;
    int prev1 = 1;
    int prev2 = 0;
    int curr = 0;
    for(int i=3; i<=n; i++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1 << endl;
}

void climbingStairs(){
    int n;
    cin >> n;
    int prev1 = 1;
    int prev2 = 1;
    int curr = 0;
    for(int i=2; i<=n; i++){
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    cout << prev1 << endl;
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // fibonacciMemoization();
    // fibonacciTabulation();
    // fibonacciWithoutSpace();
    climbingStairs();
    return 0;
}