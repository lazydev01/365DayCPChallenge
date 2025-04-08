#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void eatingQueries(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        for(int i=1; i<n; i++){
            arr[i] = arr[i] + arr[i-1];
        }
        for(int i=0; i<q; i++){
            int query;
            cin >> query;
            if(query > arr[n-1]){
                cout << -1 << endl;
            }
            else{
                int index = lower_bound(arr.begin(), arr.end(), query) - arr.begin();
                cout << index+1 << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    eatingQueries();
    return 0;
}