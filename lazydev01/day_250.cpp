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
            int take = 0;
            if(maxWeight >= weight[j]){
                take = value[j] + prev[j-weight[j]]; 
            }
            curr[j] = max(take, notTake);
        }
        prev = curr;
    }
    return curr[maxWeight];     
}

// Question -> https://www.codechef.com/problems/FEVER

int main() {
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x>98){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
	return 0;
} 