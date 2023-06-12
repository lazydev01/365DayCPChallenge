#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void numberOfSubarraysWithXorK(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int xr = 0;
    map<int, int> mp;
    mp[xr]++;
    int count = 0;
    for(int i=0; i<n; i++){
        xr = xr^arr[i];
        int x = xr^target;
        count+=mp[x];
        mp[xr]++;
    }
    cout << count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    numberOfSubarraysWithXorK();
    return 0;
}