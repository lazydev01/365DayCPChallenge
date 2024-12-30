#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void robinHoodAndTheMajorOak(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n%2==0){
            if((k+2)%4==0 || (k+1)%4==0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{
            if((k+1)%4==0 || ((k+4)%4==0)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    robinHoodAndTheMajorOak();
    return 0;
}