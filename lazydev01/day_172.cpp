#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void threeSum(){
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  set<vector<int>> st;
  for(int i=0; i<n; i++){
    map<int, int> m;
    int sum = arr[i];
    for(int j=i+1; j<n; j++){
      sum+=arr[j];
      if(m[-sum] > 0){
        vector<int> temp = {arr[i], arr[j], -sum};
        st.insert(temp);
      }
      else{
        m[arr[j]]++;
      }
      sum-=arr[j];
    }
  }
  vector<vector<int>> ans = {st.begin(), st.end()};
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<3; j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}

void threeSumOptimal(){
  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  for(int i=0; i<n; i++){
    if(i>0 && arr[i]==arr[i-1]) continue;
    int j = i+1;
    int k = n-1;
    while(j<k){
      int sum = arr[i]+arr[j]+arr[k];
      if(sum==0){
        vector<int> temp = {arr[i], arr[j], arr[k]};
        ans.push_back(temp);
        j++;
        while(arr[j]==arr[j-1] && j<k){
          j++;
        }
        k--;
        while(arr[k]==arr[k+1] && j<k){
          k--;
        }
      }
      else if(sum<0){
        j++;
      }
      else{
        k--;
      }
    }
  }
  for(int i=0; i<ans.size(); i++){
    for(int j=0; j<3; j++){
      cout << ans[i][j] << endl;
    }
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    threeSumOptimal();
    return 0;
}