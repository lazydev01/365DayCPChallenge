#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void matryoshkas(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int count = 0;
        for(auto i : mp){
            count += (max(i.second - mp[i.first - 1], 0ll));
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    matryoshkas();
    return 0;
}