#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findQueenPlacement(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &upperDiagonal, vector<int> &left, vector<int> &lowerDiagonal, int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int i=0; i<n; i++){
        if(upperDiagonal[n-1+(col - i)]==0 && left[i]==0 && lowerDiagonal[i + col]==0){
            board[i][col]='Q';
            left[i]=1;
            lowerDiagonal[i+col]=1;
            upperDiagonal[n-1 + (col - i)]=1;
            findQueenPlacement(col+1, board, ans, upperDiagonal, left, lowerDiagonal, n);
            board[i][col]='.';
            left[i]=0;
            lowerDiagonal[i+col]=0;
            upperDiagonal[n-1 + (col - i)]=0;
        }
    }
} 

void nQueensProblem(){
    int n;
    cin >> n;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    vector<int> upperDiagonal(2*n-1, 0);
    vector<int> lowerDiagonal(2*n-1, 0);
    vector<int> left(n, 0);
    for(int i=0; i<n; i++){
        board[i] = s;
    }
    findQueenPlacement(0, board, ans, upperDiagonal, left, lowerDiagonal, n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<n; j++){
            cout << ans[i][j] << endl;
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    nQueensProblem();
    return 0;
}