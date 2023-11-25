#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void worthOfAVideo(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 24000 * n << endl;
    }

}

void bestOfNSets(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << 2 * max(x, y) - 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // worthOfAVideo();
    bestOfNSets();
    return 0;
}