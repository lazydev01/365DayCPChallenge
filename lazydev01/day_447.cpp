#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeAP(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if((2*b)-a>0 && ((2*b)-a)%c==0){
            cout << "YES" << endl;
        }
        else if((2*b)-c>0 && ((2*b)-c)%a==0){
            cout << "YES" << endl;
        }
        else if((a+c)>0 && ((a+c)%(2*b))==0){
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

    makeAP();
    return 0;
}