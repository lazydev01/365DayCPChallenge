#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sendingMessages(){
    int t;
    cin >> t;
    while(t--){
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int energySpent = 0;
        for(int i=0; i<n; i++){
            if(i==0){
                energySpent += min(arr[i]*a, b);
            }
            else{
                energySpent += min((arr[i]-arr[i-1])*a, b);
            }
        }
        if(energySpent >= f){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sendingMessages();
    return 0;
}