#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMinEnergy(int ind, vector<int> &arr){
    if(ind==0){
        return 0;
    }
    int left = calcMinEnergy(ind-1, arr) + abs(arr[ind]-arr[ind-1]);
    int right = INT_MAX;
    if(ind>1){
         right = calcMinEnergy(ind-2, arr) + abs(arr[ind]-arr[ind-2]);
    }
    return min(left, right);
}

void frogJump(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << calcMinEnergy(n-1, arr) << endl;
}

int calcMinEnergyMemoization(int n,vector<int> &arr, vector<int> &dp){
    if(dp[n]!=-1){
        return dp[n];
    }
    int left = calcMinEnergyMemoization(n-1,arr, dp) + abs(arr[n]-arr[n-1]);
    int right = INT_MAX;
    if(n>1){
        right = calcMinEnergyMemoization(n-2, arr, dp) + abs(arr[n]-arr[n-2]);
    }
    dp[n] = min(left, right);
    return dp[n];
}   

void frogJumpMemoization(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n, -1);
    dp[0] = 0;
    cout << calcMinEnergyMemoization(n-1, arr, dp) << endl;
}

void frogJumpTabulation(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n, 0);
    for(int i=1; i<n; i++){
        int left = dp[i-1] + abs(arr[i]-arr[i-1]);
        int right = INT_MAX;
        if(i>1){
            right = dp[i-2] + abs(arr[i]-arr[i-2]);
        }
        dp[i] = min(left, right);
    }
    cout << dp[n-1] << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}