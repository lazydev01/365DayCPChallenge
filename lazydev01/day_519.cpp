#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void moneyDouble(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        for(int i=0; i<y; i++){
            if(1000 + x > 2*x){
                x+=1000;
            }
            else{
                x*=2;
            }
        }
        cout << x << endl;
    }
}

void longJumps(){
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
        for(int i=0; i<n; i++){
            int curr_sum = i+arr[i]+1;
            int curr_total = arr[i];
            int curr_index = i+arr[i];
            while(curr_sum<=n){
                curr_sum+=arr[curr_index];
                curr_total+=(arr[curr_index]);
                curr_index+=(arr[curr_index]);
            }
            // cout << curr_total << endl;
            ans = max(ans, curr_total);
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // moneyDouble();
    longJumps();
    return 0;
}