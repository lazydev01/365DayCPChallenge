#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void redAndBlue(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n;
        vector<int> red(n);
        for(int i=0; i<n; i++){
            cin >> red[i];
        }
        cin >> m;
        vector<int> blue(m);
        for(int i=0; i<m; i++){
            cin >> blue[i];
        }
        int sum_r = 0;
        int sum_b = 0;
        int r = 0;
        int b = 0;
        for(int i=0; i<n; i++){
            r+=red[i];
            sum_r = max(sum_r, r);
        }
        for(int i=0; i<m; i++){
            b+=blue[i];
            sum_b = max(sum_b, b);
        }
        cout << sum_r + sum_b << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    redAndBlue();
    return 0;
}

/*

6 -5 7 -3

2 3 -4

5 -1 4 -3

1 -1 -4

*/