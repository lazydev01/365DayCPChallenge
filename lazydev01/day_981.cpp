#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeItGood(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int lastPeek = 0;
        for(int i = n-1; i>0; i--){
            if(arr[i-1] < arr[i]){
                lastPeek = i;
                break;
            }
        }
        int ans = -1;
        for(int i = 0; i < lastPeek-1; i++){
            if(arr[i] > arr[i+1]){
                ans = i;
            }
        }
        cout << ans + 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeItGood();
    return 0;
}