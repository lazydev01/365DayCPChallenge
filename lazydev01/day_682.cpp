#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gorillaAndPermutation(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        for(int i=n; i>m; i--){
            cout << i << " ";
        }
        for(int i=1; i<=m; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    gorillaAndPermutation();
    return 0;
}