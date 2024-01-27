#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void joinStates(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        int cum_sum = 0;
        for(auto i : arr){
            if(i>=m){
                ans++;
                cum_sum = 0;
            }
            else{
                cum_sum+=i;
                if(cum_sum>=m){
                    ans++;
                    cum_sum = 0;
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

    joinStates();
    return 0;
}