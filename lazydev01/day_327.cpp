#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void survivalTime(){
    int t;
    cin >> t;
    while(t--){
        int n,x,d;
        cin >> n >> x >> d;
        cout << (n/(5*x) + d) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    survivalTime();
    return 0;
}