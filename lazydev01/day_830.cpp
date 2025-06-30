#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aLetterHome(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        int mini = INT_MAX;
        int maxi = INT_MIN;  
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mini = min(arr[i], mini);
            maxi = max(arr[i], maxi);
        }
        int left = max(0ll, s - mini);
        int right = max(0ll, maxi - s);
        cout << 2 * min(left, right) + max(left, right) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    aLetterHome();
    return 0;
}