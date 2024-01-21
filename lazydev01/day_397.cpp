#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void weaponChoice(){
    int t;
    cin >> t;
    while(t--){
        int h, x, y1, y2, k;
        cin >> h >> x >> y1 >> y2 >> k;
        int type1hits, type2hits;
        type1hits = (ceil)(h/(x*1.0));
        if((h - (k*y1) > 0)){
            type2hits = k;
            h-=(k*y1);
            type2hits += (ceil)(h/(y2*1.0));
        }
        else{
            type2hits = (ceil)(h/(y1*1.0));
        }
        cout << min(type2hits, type1hits) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    weaponChoice();
    return 0;
}