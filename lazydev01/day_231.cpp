#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int countPoints(vector<vector<int>> &points, int index, int last){
    if(index==0){
        int maxi = 0;
        for(int i=0; i<3; i++){
            if(i!=last){
                maxi = max(maxi, points[index][i]);
            }
        }
        return maxi;
    }
    int maxi = 0;
    for(int i=0; i<3; i++){
        if(i!=last){
            maxi = max(maxi, points[index][i] + countPoints(points, index-1, i));
        }
    }
    return maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    cout << countPoints(points, n-1, 3) << endl;
}

int countPointsMemoization(vector<vector<int>> &points, int index, int last, vector<vector<int>> &dp){
    if(index==0){
        int maxi = 0;
        for(int i=0; i<3; i++){
            if(i!=last){
                maxi = max(maxi, points[index][i]);
            }
        }
        return maxi;
    }
    if(dp[index][last]!=-1){
        return dp[index][last];
    }
    int maxi = 0;
    for(int i=0; i<3; i++){
        if(i!=last){
            maxi = max(maxi, points[index][i] + countPointsMemoization(points, index-1, i, dp));
        }
    }
    return dp[index][last] = maxi;
}

int ninjaTrainingMemoization(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    cout << countPointsMemoization(points, n-1, 3, dp) << endl;;
}

int ninjaTrainingTabulation(int n, vector<vector<int>> &points)
{
    vector<vector<int>> dp(n, vector<int>(4, -1));
    dp[0][0] = max(points[0][1], points[0][2]);
    dp[0][1] = max(points[0][0], points[0][2]);
    dp[0][2] = max(points[0][0], points[0][1]);
    dp[0][3] = max(max(points[0][1], points[0][2]), points[0][0]);
    for(int i=1; i<n; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<3; k++){
                if(k!=j){
                    dp[i][j] = max(dp[i][j], points[i][k] + dp[i-1][k]);
                }
            }
        }
    }
    return dp[n-1][3];
}

int ninjaTrainingSpaceOptimization(int n, vector<vector<int>> &points)
{
    vector<int> dp(4, 0);
    dp[0] = max(points[0][1], points[0][2]);
    dp[1] = max(points[0][0], points[0][2]);
    dp[2] = max(points[0][0], points[0][1]);
    dp[3] = max(max(points[0][1], points[0][2]), points[0][0]);
    for(int i=1; i<n; i++){
        vector<int> temp(4, 0);
        for(int j=0;j<4; j++){
            for(int k=0; k<3; k++){
                if(k!=j){
                    temp[j] = max(temp[j], points[i][k] + dp[k]);
                }
            }
        }
        dp = temp;
    }
    return dp[3];
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> points(n, vector<int>(3, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> points[i][j];
        }
    }
    // ninjaTraining(n, points);
    ninjaTrainingMemoization(n, points);
    return 0;
}