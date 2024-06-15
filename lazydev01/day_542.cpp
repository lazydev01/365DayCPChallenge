#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void optimalSetMatrixZero(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i <n; i++){
        for(int j = 0; j <m; j++){
            cin >> mat[i][j];
        }
    }
    int col1 = -1;
    for(int i=0; i<n; i++){
        if(mat[i][0]==0){
            col1 = 0;
        }
    }
    for(int i=0; i<m; i++){
        if(mat[0][i]==0){
            mat[0][0] = 0;
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(mat[i][j]==0){
                mat[i][0] = 0;
                mat[0][j] = 0;
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<m; j++){
            if(mat[i][0]==0 || mat[0][j]==0){
                mat[i][j] = 0;
            }
        }
    }
    if(mat[0][0]==0){
        for(int i=0; i<m; i++){
            mat[0][i] = 0;
        }
    }
    if(col1==0){
        for(int i=0; i<n; i++){
            mat[i][0] = 0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    optimalSetMatrixZero();
    return 0;
}