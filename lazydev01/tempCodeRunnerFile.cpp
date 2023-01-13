#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        bool containsReplication = false;
        int ans = 0;
        for(auto i: m){
            if(i.second==k){
                ans+=i.first;
                containsReplication = true;
            }
        }
        if(containsReplication){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }

    }
    return 0;
}