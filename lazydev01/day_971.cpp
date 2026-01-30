#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void candiesForNephews(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << (3 - (n%3 == 0 ? 3 : n%3)) << endl;
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    candiesForNephews();
    return 0;
}