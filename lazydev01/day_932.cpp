#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void needMoreArrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int ans = 1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int lastEl = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] > lastEl + 1){
                ans++;
                lastEl = arr[i];
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    needMoreArrays();
    return 0;
}