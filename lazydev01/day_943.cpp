#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void redstone(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        bool canMatchSpeed = false;
        for(auto i : mp){
            if(i.second > 1){
                canMatchSpeed = true;
                break;
            }
        }
        if(canMatchSpeed) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    redstone();
    return 0;
}