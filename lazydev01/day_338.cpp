#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void drumpfForPresident(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        for(int i=0; i<n; i++){
            if(i+1 == arr[i]){
               mp[i+1] = -1;  
            }
            if(mp[arr[i]]!=-1){
                mp[arr[i]]++;
            }
        }
        int count = 0;
        for(auto i : mp){
            if(i.second >= k){
                count++;
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    drumpfForPresident();
    return 0;
}