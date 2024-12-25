#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void excitingBets(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int diff = abs(max(a, b) - min(a, b));
        int mod;
        if(diff==0){
            mod = 0;
        }
        else{
            mod = min(a%diff, diff - (a%diff));
        }
        cout << diff << " " << mod << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    excitingBets();
    return 0;
}