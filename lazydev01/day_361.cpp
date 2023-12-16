#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void foodCosts(){
    int x, y;
    cin >> x >> y;
    cout << (6*x) + y << endl;
}

void fairShareSettlement(){
  int t;
  cin >> t;
  while(t--){
    double n, k;
    cin >> n >> k;
    double ans = (ceil)(n/(k+1));
    double left_amount = n - ans;
    int each_pay = (float)(n/(k+1));
    double extra_amount = left_amount - (each_pay * k);
    cout << ans+extra_amount << endl;
  }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // foodCosts();    
    fairShareSettlement();
    return 0;
}