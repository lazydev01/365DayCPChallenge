#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void blankSpace(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        int zero_count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                zero_count++;
            }
            else{
                ans = max(ans, zero_count);
                zero_count = 0;
            }
        }
        ans = max(ans, zero_count);
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    blankSpace();
    return 0;
}