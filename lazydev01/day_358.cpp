#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void vasyaAndSocks(){
    int n, m;
    cin >> n >> m;
    int ans = n;
    while(n>=m){
        ans = ans + (n/m);
        n = (n/m) + (n%m);
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vasyaAndSocks();
    return 0;
}