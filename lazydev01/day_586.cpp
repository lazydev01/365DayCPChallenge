#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void brickWall(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        cout << (n*(m/2)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    brickWall();
    return 0;
}