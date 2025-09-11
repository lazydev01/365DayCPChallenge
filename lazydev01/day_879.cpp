#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void polycarpsPockets(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxFreq = 0;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
        maxFreq = max(maxFreq, mp[arr[i]]);
    }
    cout << maxFreq << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    polycarpsPockets();
    return 0;
}