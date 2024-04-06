#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void reach5Star(){
    int x, y;
    cin >> x >> y;
    cout << ((x+y)>=2000 ? "YES" : "NO") << endl;
}

void moodyChef(){
  int t;
  cin >> t;
  while(t--){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    int max_el = 0;
    int min_el = 0;
    int happiness = 0;
    for(int i=0; i<n; i++){
      cin >> arr[i];
      if(arr[i]>=l && arr[i]<=r){
        happiness++;
      }
      else{
        happiness--;
      }
      min_el = min(min_el, happiness);
      max_el = max(max_el, happiness);
    }
    cout << max_el << " " << min_el << endl;
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // reach5Star();
    moodyChef();
    return 0;
}