#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<vector<int>> matrix;
        int row_count = 0;
        int col_count = 0;
        for(int i=0; i<n; i++){
            vector<int> row(n);
            for(int j=0; j<n; j++){
                cin >> row[j];
                // cout << row[j] << endl;
            }
            matrix.push_back(row);
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    row_count++;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(matrix[j][i]==0){
                    col_count++;
                    break;
                }
            }
        }
        if(row_count>=n && col_count>=n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}