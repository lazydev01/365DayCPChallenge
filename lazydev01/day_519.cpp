#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void moneyDouble(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        for(int i=0; i<y; i++){
            if(1000 + x > 2*x){
                x+=1000;
            }
            else{
                x*=2;
            }
        }
        cout << x << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    moneyDouble();
    return 0;
}