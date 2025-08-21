#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mainakAndArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int ans = INT_MIN;
        int lastMax = INT_MIN;
        int firstMin = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i > 0){
                lastMax = max(lastMax, arr[i]);
            }
            if(i < n-1){
                firstMin = min(firstMin, arr[i]);
            }
        }
        for(int i = 0; i < n-1; i++){
            ans = max(ans, arr[i] - arr[i+1]);
        }
        ans = max(ans, arr[n-1] - arr[0]);
        ans = max(ans, lastMax - arr[0]);
        ans = max(ans, arr[n-1] - firstMin);
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mainakAndArray();
    return 0;
}

/*

3 5 1 5 3 

2 1 8 3

14 14 14 1 16 16 16 16


*/