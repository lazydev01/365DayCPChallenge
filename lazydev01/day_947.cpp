#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void blackslexAndPassword(){
    int t;
    cin >> t;
    while(t--){
        int k, x;
        cin >> k >> x;
        cout << (k*x)+1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    blackslexAndPassword();
    return 0;
}