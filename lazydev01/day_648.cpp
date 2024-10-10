#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void antonAndDigits(){
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int num256 = min(k2, min(k5, k6));
    k2-=num256;
    int num32 = min(k2, k3);
    cout << (256*num256 + 32*num32) << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    antonAndDigits();
    return 0;
}