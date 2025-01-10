#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void olyaAndGameWithArrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> arrays;
        int minimumSecondEl = INT_MAX;
        int minimumEl = INT_MAX;
        int ans = 0;
        for(int i=0; i<n; i++){
            int m;
            cin >> m;
            vector<int> arr(m);
            int minEl = INT_MAX;
            int secondMinEl = INT_MAX;
            for(int j=0; j<m; j++){
                cin >> arr[j];
                if(arr[j] <= minEl){
                    secondMinEl = minEl;
                    minEl = arr[j];
                }
                else{
                    if(secondMinEl > arr[j]){
                        secondMinEl = arr[j];
                    }
                }
            }
            minimumSecondEl = min(minimumSecondEl, secondMinEl);
            minimumEl = min(minEl, minimumEl);
            ans += secondMinEl;
        }
        ans-=minimumSecondEl;
        ans+=minimumEl;
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    olyaAndGameWithArrays();
    return 0;
}