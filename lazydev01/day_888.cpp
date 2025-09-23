#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void collatzConjecture(){
    int t;
    cin >> t;
    while(t--){
        int k, x;
        cin >> k >> x;
        long long ans = x * (1 << k);
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    collatzConjecture();
    return 0;
}