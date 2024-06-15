#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximize(){
    int t;
    cin >> t;
    while(t--){
        int y;
        cin >> y;
        cout << (y-1) << endl;
    }
}

void setMatrixZero(){
   int m, n;
   cin >> m >> n;
   vector<vector<int>> mat(m, vector<int>(n, -1));
   for(int i = 0; i <m; i++){
    for(int j = 0; j < n; j++){
        cin >> mat[i][j];
    }
   }
    vector<int> rows;
    vector<int> cols;
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(mat[i][j]==0){
            rows.push_back(i);
            cols.push_back(j);
        }
    }
   }
   sort(rows.begin(), rows.end());
   sort(cols.begin(), cols.end());
   rows.push_back(-1);
   cols.push_back(-1);
   int row_start = 0;
   int col_start = 0;
   for(int i=0; i<m; i++){
       for(int j=0; j<n; j++){
            if(i==rows[row_start]){
                mat[i][j] = 0;
                if(j==n-1){
                    row_start++;
                }
            }
            if(j==cols[col_start]){
                mat[i][j]=0;
                if(i==m-1){
                    col_start++;
                }
            }
       }
   }
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout << mat[i][j] << " ";
    }
    cout << endl;
   }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // maximize();
    setMatrixZero();
    return 0;
}