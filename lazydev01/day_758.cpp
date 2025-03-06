#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void theLegendOfFreyaTheFrog(){
    int t;
    cin >> t;
    while(t--){
        int x, y, k;
        cin >> x >> y >> k;
        int x_steps = (ceil)((x * 1.0) / k);
        int y_steps = (ceil)((y * 1.0) / k);
        if(x_steps > y_steps){
            cout << (2 * (x_steps - 1)) + 1 << endl;
        }
        else{
            cout << 2 * y_steps << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    theLegendOfFreyaTheFrog();
    return 0;
}