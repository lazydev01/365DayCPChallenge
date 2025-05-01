#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gameWithDoors(){
    int t;
    cin >> t;
    while(t--){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        int maxAlice = max(l1, r1);
        int minAlice = min(l1, r1);
        int maxBob = max(l2, r2);
        int minBob = min(l2, r2);
        if(maxBob < minAlice || maxAlice < minBob){
            cout << 1 << endl;
        }
        else{
            int ans = min(maxBob, maxAlice) - max(minAlice, minBob) + 2;
            if(minBob == minAlice) ans--;
            if(maxBob == maxAlice) ans--;
            cout << ans << endl;
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    gameWithDoors();
    return 0;
}