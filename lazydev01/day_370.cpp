#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void increasing(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        for(auto i : arr){
            mp[i]++;
        }
        bool flag = true;
        for(auto i : mp){
            if(i.second > 1){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

void yetAnotherArrayGame(){
    int t, s;
    cin >> t >> s;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        sort(arr.begin(), arr.end());
        if(s==0){
            for(int i=1; i<=(n/2); i++){
                ans += arr[i];
            }
            if(n%2){
                ans += arr[0];
            }            
        }
        else{
            reverse(arr.begin(), arr.end());
            vector<int> pre(n+1, 0);
            for(int i=0; i<n; i++){
                pre[i+1] = pre[i] + arr[i];
            }
            for(int i=0; i<n; i++){
                if((2*i) + 1 > n){
                    break;
                }
                ans = max(ans, pre[i+i+1] - pre[i]);
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // increasing();
    yetAnotherArrayGame();
    return 0;
}