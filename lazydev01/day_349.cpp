#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void chefGivesParty(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        if(k>=(n*x)){
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

    chefGivesParty();
    return 0;
}