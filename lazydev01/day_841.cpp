#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gameOfMathletes(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(mp[arr[i]]>0){
                mp[arr[i]]--;
                if(mp[k - arr[i]] > 0){
                    ans++;
                    mp[k - arr[i]]--;
                }
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    gameOfMathletes();
    return 0;
}

/*

      5 3 5  9  9 3


*/