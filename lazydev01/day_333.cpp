#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void chessPairing(){
    int t;
    cin >> t;
    while(t--){
        int n, rated;
        cin >> n >> rated;
        int unrated = (2*n) - rated;
        if(unrated>=rated){
            cout << 0 << endl;
        }
        else{
            cout << (rated - unrated) << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    chessPairing();
    return 0;
}