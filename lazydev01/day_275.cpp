#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int longestBitonicSubsequence(vector<int>& arr, int n)
{
	vector<int> dp1(n, 1);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j] < arr[i] && 1+dp1[j]>dp1[i]){
                dp1[i] = 1 + dp1[j];
            }
        }
    }
    vector<int> dp2(n, 1);
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>i; j--){
            if(arr[j] < arr[i] && 1+dp2[j]>dp2[i]){
                dp2[i] = 1 + dp2[j];
            }
        }
    }
    int maxi = 0;
    for(int i=0; i<n; i++){
        maxi = max(maxi, dp1[i]+dp2[i]-1);
    }
    return maxi;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}