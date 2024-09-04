#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimize(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c = (a+b)/2;
        cout << (c - a) + (b - c) << endl;
    }
}

void rainwaterProblem(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int l = 0;
    int r = n-1;
    int leftMax = 0;
    int rightMax = 0;
    int ans = 0;
    while(l<r){
        if(arr[l] < arr[r]){
            ans += (max(leftMax-arr[l], 0ll));
            leftMax = max(leftMax, arr[l]);
            l++;
        }
        else{
            ans += (max(rightMax-arr[r], 0ll));
            rightMax = max(rightMax, arr[r]);
            r--;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // minimize();
    rainwaterProblem();
    return 0;
}