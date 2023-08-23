#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int minSubsetSumDifference(vector<int>& arr, int n)
{
  int totSum = 0;
  for(int i=0; i<n; i++){
    totSum+=arr[i];
  }
  vector<vector<bool>> dp(n, vector<bool>((totSum/2)+1, 0));
  for(int i=0; i<n; i++){
    dp[i][0] = true;
  }
  if(arr[0]<=(totSum/2)){
    dp[0][arr[0]]=true;
  }
  for(int i=1; i<n; i++){
    for(int j=1; j<=(totSum/2); j++){
      bool notTake = dp[i-1][j];
      bool take = false;
      if(arr[i]<=j){
        take = dp[i-1][j-arr[i]];
      }
      dp[i][j] = take | notTake;
    }
  }
  int mini = 1e9;
  for(int i=0; i<=(totSum/2); i++){
    if(dp[n-1][i]){
      mini = min(mini, abs(totSum-(2*i)));
    }
  }
  return mini;
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    return 0;
}