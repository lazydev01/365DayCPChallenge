#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void coprime(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]] = i;
        }
        int ans = -1;
        for(int i = 1; i<= 1000; i++){
            for(int j = 1; j <= 1000; j++){
                if(mp.find(i) != mp.end() && mp.find(j) != mp.end() && __gcd(i, j) == 1){
                    ans = max(ans, mp[i] + 1 + mp[j] + 1);
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

    coprime();
    return 0;
}