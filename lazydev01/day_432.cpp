#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aryaInGrid(){
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y, l;
        cin >> n >> m >> x >> y >> l;
        int start_x = x - ((x-1)/l)*l;
        int end_x = x + ((n-x)/l)*l;
        int start_y = y - ((y-1)/l)*l;
        int end_y = y + ((m-y)/l)*l;
        cout << ((((end_x-start_x)/l)+1) * (((end_y-start_y)/l)+1)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    aryaInGrid();
    return 0;
}

/*

****
****
****

7*8 grid

********
********
********
********
********
********
********





*/