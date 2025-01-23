#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fibonacciness(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        int ans1 = 1;
        int a3One = a1 + a2;
        if(a2 + a3One == a4){
            ans1++;
        }
        if(a3One+a4 == a5){
            ans1++;
        }
        int a3Two = a4 - a2;
        int ans2 = 1;
        if(a1 + a2 == a3Two){
            ans2++;
        }
        if(a3Two + a4 == a5){
            ans2++;
        }
        cout << max(ans1, ans2) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fibonacciness();
    return 0;
}