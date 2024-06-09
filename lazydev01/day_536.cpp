#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void grasshopperOnALine(){
    int t;
    cin >> t;
    while(t--){
        int c, k;
        cin >> c >> k;
        if(c%k!=0){
            cout << 1 << endl;
            cout << c << endl;
        }
        else{
            cout << 2 << endl;
            if(c-1 % k == 0){
                cout << c-2 << " " << 2 << endl;
            }
            else{
                cout << c-1 << " " << 1 << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    grasshopperOnALine();
    return 0;
}