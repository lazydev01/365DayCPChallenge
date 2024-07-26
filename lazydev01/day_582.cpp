#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void preparingForTheContest(){
    int t;
    cin >> t;
    while(t--){
      int n, k;
      cin >> n >> k;
      vector<int> ans;
      for(int i=n-k; i<=n; i++){
        ans.push_back(i);
      }
      for(int i=n-k-1; i>=1; i--){
        ans.push_back(i);
      }
      for(auto i : ans){
        cout << i << " ";
      }
      cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    preparingForTheContest();
    return 0;
}