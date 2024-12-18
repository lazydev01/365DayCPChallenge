#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void skiResort(){
    int t;
    cin >> t;
    while(t--){
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> arr(n);
        int validDays = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]<=q){
                validDays++;
            }
            else{
                validDays=0;
            }
            if(validDays>=k){
                ans+=(validDays-k+1);
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    skiResort();
    return 0;
}