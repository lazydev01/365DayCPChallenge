#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rockAndLever(){
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
        map<int, int> mp;
        for(int i=0; i<n; i++){
            int index = 0;
            int maxOneIndex = 0;
            while(arr[i]!=0){
                if(arr[i]%2 == 1){
                    maxOneIndex = index;
                }
                arr[i]/=2;
                index++;
            }
            mp[maxOneIndex]++;
        }
        for(auto i : mp){
            ans += ((i.second - 1) * i.second) / 2;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    rockAndLever();
    return 0;
}