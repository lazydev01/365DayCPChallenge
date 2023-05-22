/*

  Question -> https://www.codechef.com/problems/MAXDIFFMIN

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);


  int t;
  cin >> t;
  while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> arr(3);
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    sort(arr.begin(), arr.end());
    cout << arr[2]-arr[0] << endl;
  }
  return 0;
}