#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void morningSandwich(){
    int t;
    cin >> t;
    while(t--){
        int b, c, h;
        cin >> b >> c >> h;
        cout << 2 * min(b-1, c+h) + 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    morningSandwich();
    return 0;
}