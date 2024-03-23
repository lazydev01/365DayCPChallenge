#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void acPlease(){
    int n;
    cin >> n;
    if(n>30){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void diceGame3(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        ans = ((n/2)*13 + ((n%2)?6:0));
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // acPlease();
    diceGame3();
    return 0;
}