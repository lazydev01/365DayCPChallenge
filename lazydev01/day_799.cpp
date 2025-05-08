#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimalCoprime(){
  int t;
  cin >> t;
  while(t--){
    int l, r;
    cin >> l >> r;
    if(l==r && l==1){
      cout << 1 << endl;
    }
    else{
      cout << r-l << endl;
    }
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minimalCoprime();
    return 0;
}