#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void paymentWithoutChange(){
    int t;
    cin >> t;
    while(t--){
        int a, b, s, n;
        cin >> a >> b >> s >> n;
        int total_a = min(a, n/s);
        int sum_a = total_a * s;
        int remaining = n - sum_a;
        if(b>=remaining){
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

    paymentWithoutChange();
    return 0;
}