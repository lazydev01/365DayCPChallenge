#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int MOD = 1e9+7;

void jzzhuAndSequences(){
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;

    vector<int> arr(6);
    arr[0] = x;
    arr[1] = y;
    arr[2] = y - x;
    arr[3] = -x;
    arr[4] = -y;
    arr[5] = x - y;

    n = (n - 1) % 6;

    cout << (arr[n] % MOD + MOD) % MOD << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    jzzhuAndSequences();
    return 0;
}