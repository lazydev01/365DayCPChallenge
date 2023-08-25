#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int mod = 1e9+7;

int findWaysSpaceOptimization(vector<int>& arr, int k)
{
	int n = arr.size();
    vector<int> prev(k+1, 0);
    vector<int> curr(k+1, 0);
    prev[0] = 1;
    curr[0] = 1;
    if(arr[0]<=k){
        prev[arr[0]] = 1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=k; j++){
            int notTake = prev[j];
            int take = 0;
            if(arr[i]<=j){
                take = prev[j-arr[i]];
            }
            curr[j] = (take + notTake)%mod;
        }
        prev = curr;
    }
    return prev[k];
}

int countPartitions(int n, int d, vector<int> &arr) {
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}