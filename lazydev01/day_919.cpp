#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void alternatingSeries(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n-1; i++){
            if(i % 2 == 0){
                cout << -1 << " ";
            }
            else{
                cout << 3 << " ";
            }
        }
        if(n%2 == 0){
            cout << 2 << " ";
        }
        else{
            cout << -1 << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    alternatingSeries();
    return 0;
}