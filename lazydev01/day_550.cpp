#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void stockBuyAndSell(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxSellPrice = arr[n-1];
    int maxProfit = 0;
    for(int i=n-1; i>=0; i--){
        maxSellPrice = max(maxSellPrice, arr[i]);
        arr[i] = maxSellPrice - arr[i];
        maxProfit = max(maxProfit, arr[i]);
    }
    cout << maxProfit << endl;
}

void rotateImageBy90Degrees(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m, -1));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            ans[j][i] = mat[n-1-i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateImageBy90DegreesOptimal(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m/2; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[i][m-1-j];
            mat[i][m-1-j] = temp;
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

    // stockBuyAndSell();
    // rotateImageBy90Degrees();
    rotateImageBy90DegreesOptimal();
    return 0;
}

/*

11 12 13
21 22 23
31 32 33


31 21 11
32 22 12
33 23 13


31 32 33
21 22 23
11 12 13


*/