#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void permutationDisturbance(){
    int t;
    cin >> t;
    while(t--){
      int n;
      cin >> n;
      vector<int> arr(n);
      for(int i=0; i<n; i++){
        cin >> arr[i];
      }
      int count = 0;
      int lastIndex = -1;
      if(arr[0]==1){
        lastIndex = 0;
        count++;
      }
      for(int i=1; i<n; i++){
        if(arr[i]==(i+1) && lastIndex!=(i-1)){
          count++;
          lastIndex = i;
        }
      }
      cout << count << endl;
    }
}

void binaryMinimal(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ans = "";
    int count_ones = 0;
    for(auto i : s){
      if(i=='1'){
        count_ones++;
      }
    }
    int count_zeroes = n - count_ones;
    if(k>=count_ones){
      for(int i=0; i<max(0ll, (count_ones+count_zeroes-k)); i++){
        ans+='0';
      }
    }
    else{
      for(auto i : s){
        if(k==0){
          ans+=i;
        }
        else{
          if(i=='1'){
            k--;
          }
          ans+='0';
        }
      }
    }
    cout << ans << endl;
  }
}

void freedom(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
      cin >> arr[i];
    }
    map<int, int> mp;
    int ans = 0;
    for(int i=0; i<n; i++){
      if(arr[i]!=1 && (3*arr[i])%(arr[i]-1)==0){
        int b = (3*arr[i])/(arr[i]-1);
        ans+=mp[b];
      }
      mp[arr[i]]++;
    }
    cout << ans << endl;
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // permutationDisturbance();
    // binaryMinimal();
    freedom();
    return 0;
}