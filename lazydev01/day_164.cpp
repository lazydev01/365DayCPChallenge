#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void setMatrixZeroes(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n);
    for(int i=0; i<n; i++){
        vector<int> row(m);
        for(int j=0; j<m; j++){
            cin >> row[j];
        }
        mat[i]=row;
    }
    int row[n]={0};
    int col[m]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i]==1 || col[j]==1){
                mat[i][j] = 0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void setMatrixZeroes(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n);
    for(int i=0; i<n; i++){
        vector<int> row(m);
        for(int j=0; j<m; j++){
            cin >> row[j];
        }
        mat[i]=row;
    }
    int col0 = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j]==0){
                mat[i][0]=0;
                if(j==0){
                    col0 = 0;
                }
                else{
                    mat[0][j] = 0;
                }
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            if(mat[i][j]!=0){
                if(mat[i][0]==0 || mat[0][j]==0){
                    mat[i][j]=0;
                }
            }
        }
    }

    if(mat[0][0]==0){
        for(int j=0; j<m; j++){
            mat[0][j]=0;
        }
    }

    if(col0==0){
        for(int i=0; i<n; i++){
            mat[i][0]=0;
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

    setMatrixZeroes();
    return 0;
}