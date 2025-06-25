#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void newTheatreSquare(){
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<string> theatre(n);
        for(int i = 0; i < n; i++){
            cin >> theatre[i];
        }
        int singleTile = 0;
        int doubleTile = 0;
        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m; j++){
                if(theatre[i][j] == '.'){
                    if(j+1 < m && theatre[i][j+1] == '.'){
                        doubleTile++;
                        j++;
                    }
                    else{
                        singleTile++;
                    }
                }
            }
        }
        int ans = 0;
        if(y >= x * 2){
            ans = ((x * (singleTile + (2 * doubleTile))));
        }
        else{
            ans = ((x * singleTile) + (y * doubleTile));
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    newTheatreSquare();
    return 0;
}