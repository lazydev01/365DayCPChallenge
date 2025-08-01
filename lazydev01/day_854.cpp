#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void noCasinoInTheMountains(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int count = 0;
        bool breakDay = false;
        int peaks = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(breakDay){
                breakDay = false;
                continue;
            }
            if(arr[i] == 0){
                count++;
            }
            else{
                count = 0;
            }
            if(count == k){
                peaks++;
                count = 0;
                breakDay = true;
            }
        }
        cout << peaks << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    noCasinoInTheMountains();
    return 0;
}