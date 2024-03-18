#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rudolfAndTheTicket(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr_1(n);
        vector<int> arr_2(m);
        for(int i=0; i<n; i++){
            cin >> arr_1[i];
        }
        for(int i=0; i<m; i++){
            cin >> arr_2[i];
        }
        sort(arr_1.begin(), arr_1.end());
        sort(arr_2.begin(), arr_2.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(arr_1[i]+arr_2[j] <= k){
                    ans++;
                }
                else{
                    break;
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

    rudolfAndTheTicket();
    return 0;
}