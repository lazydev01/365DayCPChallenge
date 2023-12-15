#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fancyFence(){
    int t;
    cin >> t;
    while(t--){
        float n;
        cin >> n;
        float ans = 360.0 / (180.0 - n);
        if(ans==(int)ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fancyFence();
    return 0;
}

/*

    (n-2)*180 / n = 30
    30n = 180n - 360
    n = (360)/150
    n = 12/5

*/