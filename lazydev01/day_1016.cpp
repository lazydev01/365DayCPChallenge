#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void valeriiAgainstEveryone(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n);
        map<int, int> mp;
        bool found = false;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(mp[b[i]] == 1){
                found = true;
            }
            mp[b[i]]++;
        }
        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    valeriiAgainstEveryone();
    return 0;
}