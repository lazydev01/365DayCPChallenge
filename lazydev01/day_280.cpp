#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMinMultiplication(int i, int j, vector<int> &arr){
    if(i==j){
        return 0;
    }
    int mini = 1e9;
    for(int k=i; k<j; k++){
        int minSteps = arr[i-1]*arr[j]*arr[k] + calcMinMultiplication(i, k, arr) + calcMinMultiplication(k+1, j, arr);
        mini = min(mini, minSteps);
    }
    return mini;
}

int matrixMultiplication(vector<int> &arr, int N)
{
    return calcMinMultiplication(1, N-1, arr);
}

int calcMinMultiplicationMemoization(int i, int j, vector<int> &arr, vector<vector<int>> &dp){
    if(i==j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mini = 1e9;
    for(int k=i; k<j; k++){
        int minSteps = (arr[i-1]*arr[k]*arr[j]) + (calcMinMultiplicationMemoization(i, k, arr, dp)) + calcMinMultiplicationMemoization(k+1, j, arr, dp);
        mini = min(mini, minSteps);
    }
    return dp[i][j] = mini;
}

int matrixMultiplicationMemoization(vector<int> &arr, int N){
    vector<vector<int>> dp(N, vector<int>(N, -1));
    return calcMinMultiplicationMemoization(1, N-1, arr, dp);
}

int matrixMultiplicationTabulation(vector<int> &arr, int N){
    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    for(int i=1; i<N; i++){
        dp[i][i] = 0;
    }
    for(int i=N-1; i>0; i--){
        for(int j=i+1; j<N; j++){
            int mini = 1e9;
            for(int k=i; k<j; k++){
                int minSteps = (arr[i-1]*arr[k]*arr[j]) + dp[i][k] + dp[k+1][j];
                mini = min(minSteps, mini);
            }
            dp[i][j] = mini;
        }
    }
    return dp[1][N-1];
}

/*

    https://codeforces.com/contest/1882/problem/A

*/

void problemA(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int cnt = 1;
        for(int i=0; i<n; i++){
            if(arr[i]==i+cnt){
                cnt++;
            }
        }
        cout << n - 1 + cnt << endl;
    }
}

void problemB(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            vector<int> arr(k);
            for(int j=0; j<k; j++){
                cin >> arr[j];
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    problemA();
    return 0;
}