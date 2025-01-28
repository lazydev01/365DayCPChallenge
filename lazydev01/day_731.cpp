#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void effectiveApproach(){
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]] = i+1;
    }
    int m;
    cin >> m;
    vector<int> queries(m);
    for(int i=0; i<m; i++){
        cin >> queries[i];
    }
    int vasya = 0;
    int petya = 0;
    for(int i=0; i<m; i++){
        vasya += mp[queries[i]];
        petya += n - mp[queries[i]] + 1;
    }
    cout << vasya << " " << petya << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    effectiveApproach();
    return 0;
}