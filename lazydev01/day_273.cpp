#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

vector<int> printLIS(int arr[], int n){
    vector<int> dp(n, 1);
    vector<int> hash(n);
    vector<int> ans;
    int maxi = -1e9;
    int lastIndex = 0;
    for(int i=0; i<n; i++){
        hash[i] = i;
        for(int j=0; j<i; j++){
            if(arr[i]>arr[j] && 1+dp[j]>dp[i]){
                dp[i] =  1 + dp[j];
                hash[i] = j;
            }
        }
        if(dp[i]>maxi){
            maxi = dp[i];
            lastIndex = i;
        }
        ans.push_back(arr[lastIndex]);
        while (hash[lastIndex]!=lastIndex){
            lastIndex = hash[lastIndex];
            ans.push_back(arr[lastIndex]);
        }
        reverse(ans.begin(), ans.end());
    }
    return ans;
}

int longestIncreasingSubsequenceUsingBinarySearch(int arr[], int n){
    vector<int> temp;
    temp.push_back(arr[0]);
    for(int i=1; i<n; i++){
        if(arr[i]>temp.back()){
            temp.push_back(arr[i]);
        }
        else{
            int ind = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
            temp[ind] = arr[i];
        }
    }
    return temp.size();
}

vector<int> divisibleSet(vector<int> &arr)
{
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}