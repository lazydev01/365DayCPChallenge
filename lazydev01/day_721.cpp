#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void uniqueBidAuction(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int minEl = -1;
        for(auto i : mp){
            if(i.second == 1){
                minEl = i.first;
                break;
            }
        }
        if(minEl==-1){
            cout << -1 << endl;
        }
        else{
            for(int i=0; i<n; i++){
                if(arr[i]==minEl){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    uniqueBidAuction();
    return 0;
}