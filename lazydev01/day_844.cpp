#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void onlyOneDigit(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int minNo = INT_MAX;
        while(n > 0){
            minNo = min(minNo, n % 10);
            n /= 10;
        }
        cout << minNo << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    onlyOneDigit();
    return 0;
}