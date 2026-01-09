#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void poisonedDagger(){
    int t;
    cin >> t;
    while(t--){
        int n, h;
        cin >> n >> h;
        vector<int> arr(n);
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int low = 1;
        int high = h;
        while(low <= high){
            int mid = (low + high) / 2;
            int totalDamage = 0;
            for(int i = 0; i < n; i++){
                if(i == n-1){
                    totalDamage += mid;
                }
                else{
                    totalDamage += min(arr[i+1] - arr[i], mid);
                }
            }
            if(totalDamage >= h){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << low << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    poisonedDagger();
    return 0;
}