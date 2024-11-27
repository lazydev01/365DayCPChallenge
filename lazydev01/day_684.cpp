#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void nastyaAndRice(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int minRice = a - b;
        int maxRice = a + b;
        int maxPackage = c + d;
        int minPackage = c - d;
        if((minRice * n <= maxPackage && maxRice * n >= minPackage)){
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

    nastyaAndRice();
    return 0;
}