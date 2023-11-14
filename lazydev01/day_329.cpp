#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximalExpression(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans1 = (n%k + k + 1)/2;
        int ans2 = (n%k)/2;
        if(ans1 < k){
            int v1 = ans1 * (n - ans1);
            int v2 = ans2 * (n - ans2);
            if(v1 > v2){
                ans2 = ans1;
            }
        }

        cout << ans2 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximalExpression();
    return 0;
}

/*

   y = (x%k) * ((n-x)%k)
   y = (x%k) * ((n%k) - (x%k))
   y = (z) * ((n%k) - z) [z = x%k]
   y = z * (a-z)[a = n%k]
   y = a*z - z*z
   dy/dz = a - 2*z
   a - 2*z = 0[dy/dx maximum]
   z = a/2

   


*/