#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<q; i++){   
        int j;
        cin >> j;
        auto it = lower_bound(arr.begin(), arr.end(), j) - arr.begin();
        // cout << it << endl;
        if(j==arr[it]){
            cout << 0 << endl;
        }
        else if((n-it)%2==0){
            cout << "POSITIVE" << endl;
        }
        else{
            cout << "NEGATIVE" << endl;
        }
    }
    return 0;
}