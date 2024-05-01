#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twoThreeMoves(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << 2 << endl;
        }
        else{
            cout << fixed << (int)ceil(n/3.0) << endl;
        }
    }
}

void kCloseness(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
            arr[i]=arr[i]%k;
        }
        sort(arr.begin(), arr.end());
        int ans = arr[n-1]-arr[0];
        for(int i=0; i<n-1; i++){
            ans = min(ans, arr[i]-arr[i+1]+k);
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // twoThreeMoves();
    kCloseness();
    return 0;
}