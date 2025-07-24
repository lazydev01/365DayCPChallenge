#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void tournament(){
    int t;
    cin >> t;
    while(t--){
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> arr(n);
        int maxStrength = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            maxStrength = max(maxStrength, arr[i]);
        }
        if((k != 1) || (k == 1 && arr[j - 1] == maxStrength)){
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

    tournament();
    return 0;
}