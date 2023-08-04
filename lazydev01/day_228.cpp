#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int findSum(vector<int> &arr, int ind){
    if(ind==0){
        return arr[0];
    }
    if(ind<0){
        return 0;
    }
    int pick = arr[ind] + findSum(arr, ind-2);
    int notPick = 0 + findSum(arr, ind-1);
    return max(pick, notPick);
}

void maximumSumOfNonAdjacentElementsRecursion(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << findSum(arr, n-1) << endl;
}

int findSumMemoization(vector<int> &arr, vector<int> &dp, int ind){
    if(ind==0){
        return arr[ind];
    }
    if(ind<0){
        return 0;
    }
    if(dp[ind]!=-1){
        return dp[ind];
    }
    int pick = findSumMemoization(arr, dp, ind-2) + arr[ind];
    int notPick = findSumMemoization(arr, dp, ind-1) + 0;
    return dp[ind] = max(pick, notPick);
}

void maximumSumOfNonAdjacentElementsMemoization(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n, -1);
    findSumMemoization(arr, dp, n-1);
}

void maximumSumOfNonAdjacentElementsTabulation(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n, -1);
    dp[0] = arr[0];
    for(int i=1; i<n; i++){
        int pick;
        if(i==1){
            pick = arr[i];
        }
        else{
            pick = arr[i] + dp[i-2];
        }
        int notPick = 0 + dp[i-1];
        dp[i] = max(pick, notPick);
    }
    cout << dp[n-1] << endl;
}

void maximumSumOfNonAdjacentElementsSpaceOptimization(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int prev = arr[0];
    int prev2 = 0;
    for(int i=1; i<n; i++){
        int curr = max(arr[i] + prev2, prev);
        prev2 = prev;
        prev = curr;
    }
    cout << prev << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximumSumOfNonAdjacentElementsRecursion();
    return 0;
}