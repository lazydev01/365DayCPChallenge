#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void iHate1111(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // n can be represented as 11*a + 111*b
        // 11*a + 111*b = n
        // 11*a + ((11*10) + 1)*b = n
        // 11*(a+(10*b)) + b = n
        // Modding by 11 on both sides
        // b = n%11
        int b = n%11;
        // n - 111*b
        int a = 0;
        if((n - 111*b) > 0 && (n - 111*b)%11==0){
            a = (n - 111*b)/11;
        }
        if(a*11 + 111*b == n){
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

    iHate1111();
    return 0;
}