#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void seatingInABus(){
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
        mp[arr[0]]++;
        bool flag = false;
        for(int i=1; i<n; i++){
            if(mp[arr[i]-1]==0 && mp[arr[i]+1]==0){
                flag = true;
                break;
            }
            else{
                mp[arr[i]]++;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    seatingInABus();
    return 0;
}