#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int knapsackSpaceOptimization(vector<int> &weight, vector<int> &value, int n, int maxWeight){
    vector<int> prev(maxWeight + 1, 0);
    vector<int> curr(maxWeight + 1, 0);
    for(int i=weight[0]; i<=maxWeight; i++){
        prev[i] = value[0];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=maxWeight; j++){
            int notTake = prev[j];
            int take = INT_MIN;
            if(j >= weight[i]){
                take = value[i] + prev[j-weight[i]]; 
            }
            curr[j] = max(take, notTake);
        }
        prev = curr;
    }
    return curr[maxWeight];     
}

int knapsackMoreSpaceOptimization(vector<int> weight, vector<int> value, int n,  int maxWeight){
    vector<int> prev(maxWeight + 1, 0);
    for(int i=weight[0]; i<=maxWeight; i++){
        prev[i] = value[0];
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<=maxWeight; j++){
            int notTake = prev[j];
            int take = INT_MIN;
            if(j>=weight[i]){
                take = value[i] + prev[j-weight[i]];
            }
            prev[j] = max(take, notTake);
        }
    }
    return prev[maxWeight];
}

int fetchMinCoins(int ind, int target, vector<int> &num){
    if(ind==0){
        if(target%num[ind]==0) return target/num[ind];
        return INT_MAX;
    }
    int notTake = 0 + fetchMinCoins(ind-1, target, num);
    int take = INT_MAX;
    if(target>=num[ind]){
        take = 1 + fetchMinCoins(ind, target-num[ind], num);
    }
    return min(take, notTake);
}

int minimumElements(vector<int> &num, int x)
{
    return fetchMinCoins(num.size()-1, x, num);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}