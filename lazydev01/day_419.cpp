#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void elections() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        map<int, int> mp;
        mp[a]++;
        mp[b]++;
        mp[c]++;
        int maxi = max(max(a, b), c);
        if(mp[maxi]==1){
            cout << (((maxi+1-a)==1)?0:maxi+1-a) << " " << (((maxi+1-b)==1)?0:maxi+1-b) << " " << (((maxi+1-c)==1)?0:maxi+1-c) << endl;
        }
        else{
            cout << maxi+1-a << " " << maxi+1-b << " " << maxi+1-c << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    elections();
    return 0;
}