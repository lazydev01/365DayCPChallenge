#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lineTrip(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n+1);
        arr[0] = 0;
        int maxFuelConsumption = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i+1];
            maxFuelConsumption = max(maxFuelConsumption, arr[i+1]-arr[i]);
        }
        maxFuelConsumption = max(maxFuelConsumption, 2*(k - arr[n]));
        cout << maxFuelConsumption << endl;   
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    lineTrip();
    return 0;
}