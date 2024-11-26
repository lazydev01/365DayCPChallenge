#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void negativesAndPositives(){
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
        bool oddNegatives = false;
        bool hasZero = false;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            mini = min(mini, abs(arr[i]));
            ans += abs(arr[i]);
            if(arr[i]<0){
                oddNegatives = !oddNegatives;
            }
            if(arr[i]==0){
                hasZero = true;
            }
        }
        if(hasZero || !oddNegatives){
            cout << ans << endl;
        }
        else{
            cout << ans - (2 * mini) << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    negativesAndPositives();
    return 0;
}