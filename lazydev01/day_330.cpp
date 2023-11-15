#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kthNotDivisibleByN(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int div = k/(n-1);
        int rem = k%(n-1);
        if(rem==0){
            cout << ((div*n) + rem)-1 << endl;
        }
        else{
            cout << (div*n) + rem << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kthNotDivisibleByN();
    return 0;
}

/*

1 2 3
5 6 7
9 10 11
13 14 15


*/