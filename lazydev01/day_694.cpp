#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void redAndBlueBeans(){
    int t;
    cin >> t;
    while(t--){
        int r, b, d;
        cin >> r >> b >> d;
        if(max(r, b) > min(r, b)*d + min(r, b)){
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

    redAndBlueBeans();
    return 0;
}