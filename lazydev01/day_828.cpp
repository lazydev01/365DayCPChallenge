#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void matrixStabilization(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> matrix[i][j];
            }
        }
        vector<pair<pair<int, int>, int>> toBeReplacedValues;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                bool greatestNeighbor = true;
                int maxValueToReplace = INT_MIN;
                if(i-1 >= 0 && i-1 < n){
                    if(matrix[i][j] > matrix[i-1][j]) maxValueToReplace = max(maxValueToReplace, matrix[i-1][j]);
                    else{
                        greatestNeighbor = false;
                        continue;
                    }
                }
                if(j+1 >= 0 && j+1 < m){
                    if(matrix[i][j] > matrix[i][j+1]) maxValueToReplace = max(maxValueToReplace, matrix[i][j+1]);
                    else{
                        greatestNeighbor = false;
                        continue;
                    }
                }
                if(i+1 >= 0 && i+1 < n){
                    if(matrix[i][j] > matrix[i+1][j]) maxValueToReplace = max(maxValueToReplace, matrix[i+1][j]);
                    else{
                        greatestNeighbor = false;
                        continue;
                    }
                }
                if(j-1 >= 0 && j-1 < m){
                    if(matrix[i][j] > matrix[i][j-1]) maxValueToReplace = max(maxValueToReplace, matrix[i][j-1]);
                    else{
                        greatestNeighbor = false;
                        continue;
                    }
                }
                if(greatestNeighbor){
                    toBeReplacedValues.push_back(make_pair(make_pair(i, j), maxValueToReplace));
                }
            }
        }
        for(pair<pair<int, int>, int> val: toBeReplacedValues){
            matrix[val.first.first][val.first.second] = val.second;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    matrixStabilization();
    return 0;
}