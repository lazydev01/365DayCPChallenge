#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int low = 0;
    int high = (mat.size()*mat[0].size())-1;
    while(low<=high){
        int mid = (low + high)/2;
        int row = mid / mat[0].size();
        int col = mid % mat[0].size();
        if(mat[row][col] == target){
            return true;
        }
        else if(mat[row][col] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }  
    return false;
}

pair<int, int> searchMatrixII(vector<vector<int>>& mat, int target) {
    int row = 0;
    int col = mat[0].size();
    while(row<mat.size() && col>=0){
        if(mat[row][col]==target){
            return make_pair(row, col);
        }
        if(mat[row][col]<target){
            row++;
        }
        else{
            col--;
        }
    }
    return make_pair(-1, -1);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    return 0;
}