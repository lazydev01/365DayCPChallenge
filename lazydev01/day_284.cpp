#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int maxCoinsTabulation(vector<int>& a)
{
    int n = a.size();
    a.insert(a.begin(), 1);
    a.push_back(1);
	vector<vector<int>> dp(n+2, vector<int>(n+2, 0));
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n; j++){
            if(i>j)continue;
            int maxi = INT_MIN;
            for(int k=i; k<=j; k++){
                maxi = max(maxi, (a[i-1]*a[k]*a[j+1]) + dp[i][k-1] + dp[k+1][j]);
            }
            dp[i][j] = maxi;
        }
    }
}

// int calcMaxLength(int index, vector<set<int>> &arr, int total_count, set<int> &s){
//     if(index>=arr.size()){
//         return 0;
//     }
//     int notTake = calcMaxLength(index+1, arr, total_count, s);
//     for(auto el : arr[index]){
//         s.insert(el);
//     }
//     int take = calcMaxLength(index, );
// }

// int setsAndUnion(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         vector<set<int>> arr(n);
//         for(int i=0; i<n; i++){
//             int k;
//             cin >> k;
//             set<int> s;
//             for(int j=0; j<k; j++){
//                 int a;
//                 cin >> a;
//                 s.insert(a);
//             }
//             arr[i] = s;
//         }
//         set<int> final_set;
//         for(int i=0; i<n; i++){
//             for(auto j : arr[i]){
//                 final_set.insert(j);
//             }
//         }
//         int total_count = final_set.size();
//     }
// }

int evaluateExp(string & exp) {
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}