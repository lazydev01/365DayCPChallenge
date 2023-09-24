#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int findNumberOfLIS(vector<int> &arr)
{
    int n = arr.size();
    vector<int> dp(n, 1), cnt(n, 1);
    int maxi = 1;
    for(int i=0; i<n; i++){
         for(int j=0; j<i; j++){
            if(arr[j]<arr[i] && (1+dp[j])>dp[i]){
                dp[i] = dp[j] + 1;
                cnt[i] = cnt[j];
            }
            else if(arr[j]<arr[i] && (1 + dp[j])==dp[i]){
                cnt[i] += cnt[j];
            }
         }
         maxi = max(maxi, dp[i]);
    }
    int nos = 0;
    for(int i=0; i<n; i++){
        if(dp[i]==maxi){
            nos += cnt[i];
        }
    }
    return nos;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}