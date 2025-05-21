#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void plusMinusPermutation(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int xEl = n / x;
        int yEl = n / y;
        int commonEl = n / ((x * y) / gcd(x, y));
        int sum = 0;
        int plusElements = 0;
        plusElements += ((n * (n+1))/2);
        plusElements -= ((n - (xEl - commonEl)) * ((n - (xEl - commonEl)) + 1) / 2);
        int minusElements = 0;
        minusElements += ((yEl - commonEl) * (yEl - commonEl + 1) / 2);
        sum += plusElements;
        sum -= minusElements;
        cout << sum << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    plusMinusPermutation();
    return 0;
}