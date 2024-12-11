#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mrPerfectlyFine(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string, int> mp;
        mp["00"] = INT_MAX;
        mp["01"] = INT_MAX;
        mp["10"] = INT_MAX;
        mp["11"] = INT_MAX;
        for(int i=0; i<n; i++){
            int m;
            string s;
            cin >> m >> s;
            mp[s] = min(mp[s], m);
        }
        if(mp["11"]==INT_MAX && (mp["01"]==INT_MAX || mp["10"]==INT_MAX)){
            cout << -1 << endl;
        }
        else{
            cout << min(mp["11"], mp["01"] + mp["10"]) << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mrPerfectlyFine();
    return 0;
}