#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void patrickAndShopping(){
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min(min((min(d1,d2)+d3)*2, min(d1, d2)+d3+max(d1, d2)), 2*(d1+d2)) << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    patrickAndShopping();
    return 0;
}