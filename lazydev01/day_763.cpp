#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void goodSubarrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr;
        int sum = 0;
        int ans = 0;
        int zeroCnt = 0;
        map<int, int> mp;
        mp[0] = 1;
        for(int i=0; i<n; i++){
            arr.push_back((s[i]) - '0');
            arr[i]--;
            sum+=arr[i];
            ans+=mp[sum];
            mp[sum]++;
            
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    goodSubarrays();
    return 0;
}