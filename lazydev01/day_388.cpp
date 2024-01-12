#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void oddOneOut(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        map<int, int> mp;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        for(auto i : mp){
            if(i.second==1){
                cout << i.first << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    oddOneOut();
    return 0;
}