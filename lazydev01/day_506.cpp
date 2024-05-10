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

void poweredParameters(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxi = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==1){
                ans+=n;
            }
            else{
                for(int j=1; j<=n; j++){
                    int power = pow(arr[i], j);
                    if(power>maxi){
                        break;
                    }
                    if(power <= arr[j-1]) ans++;
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

    // friendsAndCandies();
    poweredParameters();
    return 0;
}