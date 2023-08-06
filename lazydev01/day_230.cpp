#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

// #define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

#include <bits/stdc++.h>

long long int countMaxValue(vector<int> &valueInHouse, int index, bool firstConsidered){
    if(!firstConsidered){
        if(index==1){
            return valueInHouse[index];
        }
        if(index<1){
            return 0;
        }
    }
    if(index==0){
        
        return valueInHouse[0];
    }
    if(index<0){
        return 0;
    }
    
    long long int take = valueInHouse[index] + countMaxValue(valueInHouse, index-2, firstConsidered);
    long long int notTake = 0 + countMaxValue(valueInHouse, index-1, firstConsidered);
    return max(take, notTake);
}

void houseRobber()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << arr[n-1] << endl;
    }
    long long int ignoringFirst = countMaxValue(arr, n-1, false);
    long long int ignoringLast = countMaxValue(arr, n-2, true);
    cout <<  max(ignoringFirst, ignoringLast) << endl;
}

long long int countMaxValueMemoization(vector<int> &arr, int index, bool firstConsidered, vector<long long> &dp){
    if(!firstConsidered){
        if(index==1){
            return arr[index];
        }
        if(index<1){
            return 0;
        }
    }
    if(index==0){
        return arr[index];
    }
    if(index<0){
        return 0;
    }
    if(dp[index]!=-1){
        return dp[index];
    }
    long long int take = arr[index] + countMaxValueMemoization(arr, index-2, firstConsidered, dp);
    long long int notTake = 0 + countMaxValueMemoization(arr, index-1, firstConsidered, dp);
    return dp[index] = max(take, notTake);
}

void houseRobberMemoization(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << arr[n-1] << endl;
        return;
    }
    vector<long long int> dp(n, -1);
    long long int firstIgnored = countMaxValueMemoization(arr, n-1, false, dp);
    dp.assign(dp.size(),0);
    long long int lastIgnored = countMaxValueMemoization(arr, n-2, true, dp);
    cout << max(firstIgnored, lastIgnored) << endl;
}

long long int houseRobberTabulation(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();
    if(n==1){
        return valueInHouse[0];
    }
    vector<long long int> dp(n, 0);
    dp[0] = valueInHouse[0];
    for(int i=1; i<n-1; i++){
        if(i==1){
             dp[i] = max((long long int)valueInHouse[i], dp[i-1]);
        }
        else{
            dp[i] = max(valueInHouse[i]+dp[i-2], dp[i-1]);
        }
    }
    long long int lastIgnored = dp[n-2];
    dp[0] = valueInHouse[1];
    for(int i=1; i<n-1; i++){
        if(i==1){
             dp[i] = max((long long int)valueInHouse[i+1], dp[i-1]);
        }
        else{
            dp[i] = max(valueInHouse[i+1]+dp[i-2], dp[i-1]);
        }
    }
    long long int firstIgnored = dp[n-2];
    return max(firstIgnored, lastIgnored);
}

long long int houseRobberSpaceOptimization(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();
    if(n==1){
        cout << valueInHouse[0] << endl;
        return;
    }
    long long int prev2 = valueInHouse[1];
    long long int prev = max(prev2, (long long int)valueInHouse[2]);
    for(int i=2; i<n-1; i++){
        long long curr = max(valueInHouse[i+1] + prev2, prev);
        prev2 = prev;
        prev = curr;
    }
    long long int firstIgnored = prev;
    prev2 = valueInHouse[0];
    prev = max(prev2, (long long int)valueInHouse[1]);
    for(int i=2; i<n-1; i++){
        long long curr = max(valueInHouse[i] + prev2, prev);
        prev2 = prev;
        prev = curr;
    }
    long long int lastIgnored = prev;
    return max(firstIgnored, lastIgnored);
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    houseRobberMemoization();
    return 0;
}

/*

    3
    2 3 2

    0
    0 -1
    1 36
    2 3
    36
    0 -1
    1 -1
    2 3
    3 4
    4

*/