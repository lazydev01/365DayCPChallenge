#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void manhattanCircle(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> mat[i][j];
            }
        }
        int row = -1;
        int max_cnt = 0;
        for(int i=0; i<n; i++){
            int cnt = 0;
            for(int j=0; j<m; j++){
                if(mat[i][j] == '#'){
                    cnt++;
                }
            }
            if(cnt > max_cnt){
                max_cnt = cnt;
                row = i;
            }
        }
        int col_start = -1;
        int col_end = -1;
        for(int i=0; i<m; i++){
            if(col_start == -1 && mat[row][i]=='#'){
                col_start = i;
            }
            if(mat[row][i] == '#'){
                col_end = i;
            }
        }
        int col = (col_start + col_end)/2;
        cout << row + 1 << " " << col + 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    manhattanCircle();
    return 0;
}