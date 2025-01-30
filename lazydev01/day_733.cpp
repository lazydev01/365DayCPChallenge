#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void extremelyRound(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int digits = 0;
        while(n>9){
            n/=10;
            digits++;
        }
        cout << (digits * 9) + n << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    extremelyRound();
    return 0;
}