#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void boneAppetit(){
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    cout << (n*x) + (m*y) << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    boneAppetit();
    return 0;
}