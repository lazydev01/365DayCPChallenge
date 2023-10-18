#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void vladAndCafes(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]] = i;
    }
    int min_count = INT_MAX;
    int el = 0;
    for(auto i : mp){
        if(i.second < min_count){
            el = i.first;
            min_count = i.second;
        }
    }
    cout << el << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vladAndCafes();
    return 0;
}