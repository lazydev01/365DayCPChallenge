#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void chessPairing(){
    int t;
    cin >> t;
    while(t--){
        int n, rated;
        cin >> n >> rated;
        int unrated = (2*n) - rated;
        if(unrated>=rated){
            cout << 0 << endl;
        }
        else{
            cout << (rated - unrated) << endl;
        }
    }
}

void palindromicPrimeNumbers(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<5){
            cout << "0 " << n << endl;
        }
        else{
            cout << "1 " << n-1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // chessPairing();
    palindromicPrimeNumbers();
    return 0;
}

/*


1001
1 15 16 17

*/