#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void sakurakoAndWater(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> mat(n, vector<int>(n));
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        int maxLakeSize = 0;
        for(int i = n-1; i>= 0; i--){
            maxLakeSize = 0;
            for(int j = 0; j < n; j++){
                if(i+j >= n){
                    break;
                }
                maxLakeSize = min(maxLakeSize, mat[i+j][j]);
            }
            ans += abs(maxLakeSize);
        }
        for(int i = 1; i < n; i++){
            maxLakeSize = 0;
            for(int j = 0; j < n; j++){
                if(i+j >= n){
                    break;
                }
                maxLakeSize = min(maxLakeSize, mat[j][i+j]);
            }
            ans += abs(maxLakeSize);
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    sakurakoAndWater();
    return 0;
}