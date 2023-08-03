#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void frogJumpSpaceOptimization(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int prev = 0;
    int prev2 = 0;
    int curr;
    for(int i=1; i<n; i++){
        int fs = prev + abs(arr[i]-arr[i-1]);
        int ss = INT_MAX;
        if(i>1){
            ss = prev2 + abs(arr[i]-arr[i-2]);
        }
        curr = min(fs, ss);
        prev2 = prev;
        prev = curr;
    }
    cout << prev << endl;
}

void frogJumpKStepsTabulation(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> dp(n, -1);
    dp[0] = 0;
    for(int i=1; i<n; i++){
        int minSteps = INT_MAX;
        for(int j=1; j<=min(k, i); j++){
            int temp = dp[i-j] + abs(arr[i]-arr[i-j]);
            minSteps = min(minSteps, temp);
        }
        dp[i] = minSteps;
    }
    cout << dp[n-1] << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}