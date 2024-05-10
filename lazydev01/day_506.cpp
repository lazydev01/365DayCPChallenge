#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void friendsAndCandies(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        if((sum/n) == (sum/(n*1.0))){
            int ans = 0;
            for(auto i : arr){
                if(i>(sum/n)){
                    ans++;
                }
            }
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    friendsAndCandies();
    return 0;
}