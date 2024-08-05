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
    vector<vector<int>> mat(3, vector<int>(3, -1));
    for(int i = 0; i < 3; i++){
        for(int j=0; j<3; j++){
            cin >> mat[i][j];
        }
    }
    vector<vector<int>> ans(3, vector<int>(3, 1));
    for(int i = 0; i < 3; i++){
        for(int j=0; j<3; j++){
            if(mat[i][j]%2){
                if(ans[i][j]==0){
                    ans[i][j] = 1;
                }
                else{
                    ans[i][j] = 0;
                }
                if(i<2){
                    if(ans[i+1][j]==0){
                        ans[i+1][j] = 1;
                    }
                    else{
                        ans[i+1][j] = 0;
                    }
                }
                if(j<2){
                    if(ans[i][j+1]==0){
                        ans[i][j+1] = 1;
                    }
                    else{
                        ans[i][j+1] = 0;
                    }
                }
                if(i>0){
                    if(ans[i-1][j]==0){
                        ans[i-1][j] = 1;
                    }
                    else{
                        ans[i-1][j] = 0;
                    }
                }
                if(j>0){
                    if(ans[i][j-1]==0){
                        ans[i][j-1] = 1;
                    }
                    else{
                        ans[i][j-1] = 0;
                    }
                }
            }
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}