#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void pizzaforces(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ((max(6ll, n+1))/2)*5 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    pizzaforces();
    return 0;
}