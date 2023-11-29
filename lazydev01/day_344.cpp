#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void newYearsNumber(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int div = n/2020;
        int diff = n - (div*2020);
        if(diff<=div){
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

    newYearsNumber();
    return 0;
}

/*

    202
    102
    404
    000
  20200
  20604  
    

*/