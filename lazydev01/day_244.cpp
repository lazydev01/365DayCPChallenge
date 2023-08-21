#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int maximumChocolatesTabulation(int r, int c, vector<vector<int>> &grid) {
    vector<vector<vector<int>>> dp(r, vector<vector<int>>(c, vector<int>(c, 0)));
    for(int j1=0; j1<c; j1++){
        for(int j2=0; j2<c; j2++){
            if(j1==j2){
                dp[r-1][j1][j2] = grid[r-1][j1];
            }
            else{
                dp[r-1][j1][j2] = grid[r-1][j1] + grid[r-1][j2];
            }
        }
    }
    for(int i=r-2; i>=0; i--){
        for(int j1=0; j1<c; j1++){
            for(int j2=0; j2<c; j2++){
                int maxi = -1e9;
                for(int i1=-1; i1<=1; i1++){
                    for(int i2=-1; i2<=1; i2++){
                        if(j1==j2){
                            if(j1+i1 >= 0 && j1+i1<c && j2+i2>=0 && j2+i2<c){
                                maxi = max(maxi, grid[i][j1] + dp[i][j1+i1][j2+i2]);
                            }
                            else{
                                maxi = max(maxi, (long long)(grid[i][j1] + -1e9));
                            }
                        }
                        else{
                            if(j1+i1 >= 0 && j1+i1<c && j2+i2>=0 && j2+i2<c){
                                maxi = max(maxi, grid[i][j1] + grid[i][j2] + dp[i][j1+i1][j2+i2]);
                            }
                            else{
                                maxi = max(maxi, (long long)(grid[i][j1] + -1e9));
                            }
                        }
                    }
                }
                dp[i][j1][j2] = maxi;
            }
        }
    }
    return dp[0][0][c-1];
}

int maximumChocolatesSpaceOptimization(int r, int c, vector<vector<int>> &grid) {
    vector<vector<int>> prev(c, vector<int>(c, 0));
    for(int j1=0; j1<c; j1++){
        for(int j2=0; j2<c; j2++){
            if(j1==j2){
                prev[j1][j2] = grid[r-1][j1];
            }
            else{
                prev[j1][j2] = grid[r-1][j1] + grid[r-1][j2];
            }
        }
    }
    for(int i=r-2; i>=0; i--){
        vector<vector<int>> curr(c, vector<int>(c, 0));
        for(int j1=0; j1<c; j1++){
            for(int j2=0; j2<c; j2++){
                int maxi = -1e9;
                for(int i1=-1; i1<=1; i1++){
                    for(int i2=-1; i2<=1; i2++){
                        if(j1==j2){
                            if(i1+j1>=0 && i1+j1<c && i2+j2>=0 && i2+j2<c){
                                maxi = max(maxi, grid[i][j1] + prev[i1+j1][i2+j2]);
                            }
                            else{
                                maxi = max(maxi, (int)(grid[i][j1] + -1e9));
                            }
                        }
                        else{
                            if(i1+j1>=0 && i1+j1<c && i2+j2>=0 && i2+j2<c){
                                maxi = max(maxi, grid[i][j1] + grid[i][j2] + prev[i1+j1][i2+j2]);
                            }
                            else{
                                maxi = max(maxi, (int)(grid[i][j1] + grid[i][j2] + -1e9));
                            }
                        }
                        
                    }
                }
                curr[j1][j2] = maxi;
            }
        }
        prev = curr;
    }
    return prev[0][c-1];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    return 0;
}