#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void changeAtoB(){
    int t;
    cin >> t;
    while(t--){
        int a, b, k;
        cin >> a >> b >> k;
        int ans = 0;
        while(b!=a){
            if(b%k==0 && b/k>=a){
                ans ++;
                b/=k;
            }
            else if(b%k==0){
                ans+=(b-a);
                b=a;
            }
            else{
                ans+=(b%k);
                b-=(b%k);
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    changeAtoB();
    return 0;
}