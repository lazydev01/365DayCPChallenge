#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void xAxis(){
    int t;
    cin >> t;
    while(t--){
        vector<int> arr(3);
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]);
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    xAxis();
    return 0;
}