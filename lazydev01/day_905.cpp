#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
#define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void catchTheCoin(){
    int n;
    cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        if(y < -1){
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

    catchTheCoin();
    return 0;
}