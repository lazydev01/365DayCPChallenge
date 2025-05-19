#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void weNeedTheZero(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int allXor = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            allXor ^= arr[i];
        }
        if(n%2){
            // cout << "HELLO" << endl;
            cout << allXor << endl;
        }
        else{
            if(allXor == 0){
                cout << arr[0] << endl;
            }
            else{
                cout << -1 << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    weNeedTheZero();
    return 0;
}