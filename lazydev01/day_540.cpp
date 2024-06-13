#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximumMultipleSum(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=3){
            cout << n << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximumMultipleSum();
    return 0;
}