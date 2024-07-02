#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void removePrefix(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int,int> mp;
        int ind = -1;
        for(int i=n-1; i>=0; i--){
            mp[arr[i]]++;
            if(mp[arr[i]] > 1){
                ind=i;
                break;
            }
        }
        cout << ind + 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    removePrefix();
    return 0;
}