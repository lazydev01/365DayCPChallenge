#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimize(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c = (a+b)/2;
        cout << (c - a) + (b - c) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minimize();
    return 0;
}