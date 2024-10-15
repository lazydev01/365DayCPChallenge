#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void matrixRotation(){
    int t;
    cin >> t;
    while(t--){
        vector<vector<int>> mat;
        for(int i=0; i<2; i++){
            vector<int> row;
            for(int j=0; j<2; j++){
                int tmp;
                cin >> tmp;
                row.push_back(tmp);
            }
            mat.push_back(row);
        }
        int mini = min(*min_element(mat[0].begin(), mat[0].end()), *min_element(mat[1].begin(), mat[1].end()));
        int maxi = max(*max_element(mat[0].begin(), mat[0].end()), *max_element(mat[1].begin(), mat[1].end()));
        if((mat[0][0]==mini && mat[1][1]==maxi) || (mat[0][0]==maxi && mat[1][1]==mini) || (mat[0][1]==mini && mat[1][0]==maxi) || (mat[1][0]==mini && mat[0][1]==maxi)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    matrixRotation();
    return 0;
}