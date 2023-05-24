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
    long sum = 0;
    int count = 0;
    int maxCount = 0;
    for(int i=0; i<n; i++){
      sum+=arr[i];
      while(sum > k){
        sum-=arr[start];
        start++;
      }
      if(sum==k){
        count = i-start+1;
        maxCount = max(maxCount,count);
      }
    }
    cout << maxCount << endl;
}

void longestSubarrayWithSumK(){
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  long sum = 0;
  int maxCount = 0;
  map<long long, int> m;
  for(int i=0; i<n; i++){
    sum+=arr[i];
    if(sum==k){
      maxCount = max(maxCount, i+1);
    }
    long remaining = sum - arr[i];
    if(m.find(remaining)!=m.end()){
      int distance = i - m[remaining];
      maxCount = max(maxCount, distance);
    }
    if(m.find(remaining)==m.end()){
      m[sum] = i;
    }
  }
  cout << maxCount << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // longestSubarrayWithSumKOnlyPositives();
    longestSubarrayWithSumK();
    return 0;
}