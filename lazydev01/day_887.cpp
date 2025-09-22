#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void epicGame(){
    int a, b, n;
    cin >> a >> b >> n;
    bool simonTurn = true;
    while(n > 0){
        if(simonTurn){
            n -= (__gcd(n, a));
        }
        else{
            n -= (__gcd(n, b));
        }
        simonTurn = !simonTurn;
    }
    if(simonTurn){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    epicGame();
    return 0;
}