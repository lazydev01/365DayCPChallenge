#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void myFirstSortingProblem(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x,y) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    myFirstSortingProblem();
    return 0;
}