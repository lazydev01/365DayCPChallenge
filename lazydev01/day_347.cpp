#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void airlines(){
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        int required_airlines = (ceil)((double)n/100.0);
        if(x>=required_airlines){
            cout << 0 << endl;
        }
        else{
            cout << required_airlines - x << endl;
        }
    }
}

void amILucky(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        int girls = n-x;
        int remaining_boys = x%k;
        int remaining_girls = girls%k;
        cout << max(remaining_girls, remaining_boys) - min(remaining_girls, remaining_boys) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // airlines();
    amILucky();
    return 0;
}