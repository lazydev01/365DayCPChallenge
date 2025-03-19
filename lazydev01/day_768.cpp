#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void oddGrasshopper(){
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        int even[4] = {-1, 1, 1, -1};
        int odd[4] = {1, -1, -1, 1};
        bool isEven = false;
        if(x%2==0) isEven = true;
        int ans = x;
        int rem = n%4;
        for(int i=n-rem+1; i<=n; i++){
            if(isEven){
                ans+=(even[i-(n-rem+1)] * i);
            }
            else{
                ans+=(odd[i-(n-rem+1)] * i);
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    oddGrasshopper();
    return 0;
}

/*

10 10
-1 2 3 -4 -5 6 7 -8 -9 10 11

11 10
1 -2 -3 4


*/