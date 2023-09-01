#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int findWays(vector<int> &num, int tar){
    int n = num.size();
    vector<int> prev(tar+1, 0);
    vector<int> curr(tar+1, 0);
    if(num[0]==0) prev[0] = 2;
    else prev[0] = 1;
    if(num[0]!=0 && num[0]<=tar){
        prev[num[0]] = 1;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=tar; j++){
            int notTake = prev[j];
            int take = 0;
            if(num[i] <= j)take = prev[j-num[i]];
            curr[j] = notTake + take;
        }
        prev = curr;
    }
    return curr[tar];
}

int countPartitions(int n, int d, vector<int> &arr){
    int totSum = 0;
    for(auto it: arr)totSum+=it;
    if(totSum-d<0 || (totSum-d)%2) return 0;
    return findWays(arr, (totSum-d)/2);
}

int targetSum(int n, int target, vector<int>& arr) {
    return countPartitions(n, target, arr);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}