#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void pleasantPairs(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n+1);
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=arr[i]-i; j<=n; j=j+arr[i]){
                if(j>0){
                    if(arr[i]*arr[j] == i + j && i<j){
                        ans++;
                    }
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

    pleasantPairs();
    return 0;
}