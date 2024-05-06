#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gregorAndCryptography(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==5){
            cout << 2 << " " << 4 << endl;
        }
        else{
            cout << 2 << " " << n/2 << endl;
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    gregorAndCryptography();
    return 0;
}