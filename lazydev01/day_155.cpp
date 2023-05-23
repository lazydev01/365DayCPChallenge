#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void longestSubarrayWithSumKOnlyPositives(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    int start = 0;
    int end = 0;
    int count = 0;
    int sum = 0;
    while(end<n){
      if(sum==k){
        count = max(count, end-start+1);
        end++;
        sum+=arr[end];
      }
      else if(sum>k){
        sum -= arr[start];
        start++;
      }
      else{
        sum+=arr[end];
        end++;
      }
      cout << sum << " " << start << " " << end << endl;
    }
    cout << count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    longestSubarrayWithSumKOnlyPositives();
    return 0;
}