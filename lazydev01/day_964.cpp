#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void prefixMax(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxEl = 1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            maxEl = max(maxEl, arr[i]);
        }
        cout << n*maxEl << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    prefixMax();
    return 0;
}