#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void origin(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int div = n/9;
        int rem = n%9;
        cout << (45*div) + (rem*(rem+1)/2) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    origin();
    return 0;
}
