#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void squaresAndCubes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cubes = cbrt(n);
        int squares  = sqrt(n);
        int commonSquaresAndCubes = sqrt(cubes);
        int ans = cubes + squares - commonSquaresAndCubes;
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    squaresAndCubes();
    return 0;
}