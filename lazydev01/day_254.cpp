#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int fetchMinElements(int index, int target, vector<int> &num, vector<vector<int>> &dp){
    if(index==0){
        if(num[index]%target==0)return num[index]/target;
        return 1e9;
    }
    if(dp[index][target]!=-1){
        return dp[index][target];
    }
    int notTake = 0 + fetchMinElements(index-1,target, num, dp);
    int take = 1e9;
    if(num[index]<=target){
        take = 1 + fetchMinElements(index, target-num[index], num, dp);
    }
    return min(take, notTake);
}

int minimumElementsMemoization(vector<int> &num, int x)
{
    vector<vector<int>> dp(num.size(), vector<int>(x+1, -1));
    return fetchMinElements(num.size()-1, x, num, dp);
}

int minimumElementsTabulation(vector<int> &num, int x)
{
    vector<vector<int>> dp(num.size(), vector<int>(x+1, 0));
    for(int i=0; i<=x; i++){
        if(i%num[0]==0){
            dp[0][i] = i/num[0];
        }
        else{
            dp[0][i] = 1e9;
        }
    }
    for(int i=1; i<num.size(); i++){
        for(int j=0; j<=x; j++){
            int notTake = 0 + dp[i-1][j];
            int take = 1e9;
            if(num[i]<=j){
                take = 1 + dp[i][j-num[i]];
            }
            dp[i][j] = min(notTake, take);
        }
    }
    int ans =  dp[num.size()-1][x];
    if(ans>=1e9){
        return -1;
    }
    return ans;
}

int minimumElementsSpaceOptimization(vector<int> &num, int x){
    if(x==0){
        return 0;
    }
    vector<int> prev(x+1, 1e9);
    vector<int> curr(x+1, 1e9);
    for(int i=0; i<=x; i++){
        if(i%num[0]==0){
            prev[i] = i/num[0];
        }
    }
    for(int i=1; i<num.size(); i++){
        for(int j=0; j<=x; j++){
            int notTake = 0 + prev[j];
            int take = 1e9;
            if(num[i]<=j){
                take = 1 + curr[j-num[i]];
            }
            curr[j] = min(notTake, take);
        }
        prev = curr;
    }
    if(curr[x]>=1e9){
        return -1;
    }
    return curr[x];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}