#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void andZeroSumBig(){
    int MOD = 1e9 + 7;
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = 1;
        for(int i = 0; i < k; i++){
            ans *= n;
            ans%=MOD;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    andZeroSumBig();
    return 0;
}

/*

2 2

2 3
0 7
1 6
2 5








*/