#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void oathOfTheNightWatch(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    int minEl = *min_element(arr.begin(), arr.end());
    int maxEl = *max_element(arr.begin(), arr.end());
    int ans = (n-mp[maxEl]-mp[minEl]);
    if(ans<0){
        ans = 0;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    oathOfTheNightWatch();
    return 0;
}