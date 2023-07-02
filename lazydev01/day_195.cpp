#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool possiblePlacement(vector<int> &arr, int cows, int dist){
  int currPos = arr[0];
  int cowsPlaced = 1;
  for(int i=1; i<arr.size(); i++){
    if(arr[i]-currPos>=dist){
      currPos = arr[i];
      cowsPlaced++;
    }
    if(cowsPlaced==cows){
      return true;
    }
  }
  return false;
}

void aggressiveCows(){
  int n, cows;
  cin >> n >> cows;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int low = 1;
  int max_elem = *max_element(arr.begin(), arr.end());
  int min_elem = *min_element(arr.begin(), arr.end());
  int high = max_elem - min_elem;
  while(low<=high){
    int mid = (low + high)/2;
    if(possiblePlacement(arr, cows, mid)){
      low = mid + 1;
    }
    else{
      high = mid - 1;
    }
  }
  cout << high << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    return 0;
}