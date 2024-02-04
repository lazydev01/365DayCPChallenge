#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cookieDay(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int mini = INT_MAX;
        for(int i : arr){
            if(i>=k){
                int mod = i%k;
                mini = min(mini, mod);
            }
        }
        if(mini==INT_MAX){
            cout << -1 << endl;
        }
        else{
            cout << mini << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cookieDay();
    return 0;
}