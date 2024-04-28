#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gottaCatchThemAll(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int ans = 0;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            ans += (min(temp*x, y));
        }
        cout << ans << endl;
    }
}

void diceDeception(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int sum = 0;
        for(int i=0; i<min(n, k); i++){
            sum += max(arr[i], 7-arr[i]);
        }
        for(int i=min(n, k); i<n; i++){
            sum+=arr[i];
        }
        cout << sum << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//    gottaCatchThemAll();
    diceDeception();
    return 0;
}