#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void clockAndStrings(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a>b){
            swap(a, b);
        }
        if(a<c && c<b){
            if(a<d && d<b){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else if(a<d && d<b){
            if(a<c && c<b){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
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

    clockAndStrings();
    return 0;
}