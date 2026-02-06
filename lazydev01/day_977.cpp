#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kLCMEasyVersion(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if(n%2){
            cout << 1 << " " << n/2 << " " << n/2 << endl;
        }
        else if(n%4 == 0){
            cout << n/2 << " " << n/4 << " " << n/4 << endl;
        }
        else{
            cout << 2 << " " << (n-2)/2 << " " << (n-2)/2 << endl;
        }
            
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kLCMEasyVersion();
    return 0;
}