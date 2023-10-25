#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void breakTheStick(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        if(n%2==0){
            cout << "YES" << endl;
        }
        else{
            if(x%2==1){
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

    breakTheStick();
    return 0;
}