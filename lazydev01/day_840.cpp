#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void threePilesOfCandies(){
    int q;
    cin >> q;
    while(q--){
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a+b+c)/2 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    threePilesOfCandies();
    return 0;
}