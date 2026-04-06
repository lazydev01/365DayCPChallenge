#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximalAnd(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int index = 0;
            while(arr[i] > 0){
                if(arr[i] & 1){
                    mp[index]++;
                }
                arr[i] = arr[i] >> 1;
                index++;
            }
        }
        // for(auto i : mp){
        //     cout << i.first << " " << i.second << endl;
        // }
        int ans = 0;
        for(int i = 30; i>=0; i--){
            ans = ans << 1;
            int existing = mp[i];
            if(k >= n - existing){
                ans += 1;
                k-= (n - existing);
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximalAnd();
    return 0;
}