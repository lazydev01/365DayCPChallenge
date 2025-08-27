#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void olympiadDate(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> mp = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
        int distinctDigits = 5;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(mp[arr[i]] > 0){
                mp[arr[i]]--;
                if(mp[arr[i]] == 0){
                    distinctDigits--;
                }
            }
            if(distinctDigits == 0){
                ans = i+1;
                break;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    olympiadDate();
    return 0;
}