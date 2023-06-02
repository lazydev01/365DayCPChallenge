#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rotateMatrixBy90Degree(){
    int n;
    cin >> n;
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }
    int ans[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans[j][n-i-1] = mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateMatrixBy90DegreeOptimal(){
    int n;
    cin >> n;
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            swap(mat[i][j], mat[i][n-j-1]);      
        }   
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void spiralMatrix(){
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // rotateMatrixBy90Degree();
    rotateMatrixBy90DegreeOptimal();
    return 0;
}