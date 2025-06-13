#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void removeDuplicates(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int, int> mp;
    vector<int> ans;
    for(int i = n-1; i>=0; i--){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]]++;
            ans.push_back(arr[i]);
        }
    }
    cout << ans.size() << endl;
    reverse(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    removeDuplicates();
    return 0;
}