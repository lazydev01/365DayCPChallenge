#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void numberOfPairs(){
    int t;
    cin >> t;
    while(t--){
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int pairs = 0;
        for(int i=0; i<n; i++){
            int left = l - arr[i];
            int leftIndex = lower_bound(arr.begin()+i+1, arr.end(), left) - arr.begin();
            int right = r - arr[i];
            int rightIndex = upper_bound(arr.begin()+i+1, arr.end(), right) - arr.begin();
            pairs+=(rightIndex - leftIndex);
        }
        cout << pairs << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    numberOfPairs();
    return 0;
}