#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void arrayCloningTechnique(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxFreq = 0;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
            maxFreq = max(maxFreq, mp[arr[i]]);
        }
        int ans = 0;
        while(maxFreq < n){
            ans++;
            ans += min(maxFreq, n - maxFreq);
            maxFreq *= 2;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    arrayCloningTechnique();
    return 0;
}