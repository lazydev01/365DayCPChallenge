#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sumOfMedians(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n*k);
        for(int i = 0; i < n*k; i++){
            cin >> arr[i];
        }
        int ans = 0;
        int interval = n/2 + 1;
        int startIndex = (n*k) - interval;
        for(int i = 0; i < k; i++){
            ans+=(arr[startIndex]);
            startIndex -= interval;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sumOfMedians();
    return 0;
}