#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximumSum(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for(int i = 1; i < n; i++){
            arr[i] += arr[i-1];
        }
        int totalSum = arr[n-1];
        int maxSum = INT_MIN;
        for(int i = 0; i <= k; i++){
            int left = (i * 2) - 1;
            int right = k - i;
            int currSum = totalSum;
            if(left > 0){
               currSum -= arr[left];
            }
            if(right > 0){
                right = n - right;
                currSum -= (arr[n-1] - arr[right - 1]);
            }
            maxSum = max(maxSum, currSum);
            
        }
        cout << maxSum << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximumSum();   
    return 0;
}

/*

10 11 12 13 15 22

10 21 33 46 61 73

*/