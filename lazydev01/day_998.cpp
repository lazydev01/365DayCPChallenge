#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lukeIsAFoodie(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        int currMin = arr[0];
        int currMax = arr[0];
        for(int i = 1; i < n; i++){
            currMin = min(currMin, arr[i]);
            currMax = max(currMax, arr[i]);
            if(currMax - currMin > 2 * x){
                ans++;
                currMax = arr[i];
                currMin = arr[i];
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    lukeIsAFoodie();
    return 0;
}