#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void worms(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int q;
    cin >> q;
    vector<int> queries(q);
    for(int i=0; i<q; i++){
        cin >> queries[i];
    }
    for(int i=1; i<n; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    for(auto i : queries){
        cout << lower_bound(arr.begin(), arr.end(), i) - arr.begin() + 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    worms();
    return 0;
}