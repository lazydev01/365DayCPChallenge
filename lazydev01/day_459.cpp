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

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    permutationDisturbance();
    return 0;
}