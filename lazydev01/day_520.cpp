#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void morningRun(){
    int l, b;
    cin >> l >> b;
    cout << ((2*(l+b)) >= 1000 ? "YES" : "NO") << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    morningRun();
    return 0;
}