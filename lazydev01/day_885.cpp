#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sublimeSequence(){
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> x >> n;
        if(n%2 == 0){
            cout << 0 << endl;
        }
        else{
            cout << x << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sublimeSequence();
    return 0;
}