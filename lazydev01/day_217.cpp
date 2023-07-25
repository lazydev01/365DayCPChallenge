#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool isQueenPlacementPossible(int row, int col, vector<string> &board, int n){
    int tempRow = row;
    int tempCol = col;
    while(row>=0 && col>=0){
        if(board[row][col]=='Q')return false;
        row--;
        col--;
    }
    row = tempRow;
    col = tempCol;
    while(col>=0){
        if(board[row][col]=='Q')return false;
        col--;
    }
    row = tempRow;
    col = tempCol;
    while(row<n && col>=0){
        if(board[row][col]=='Q')return false;
        row++;
        col--;
    }

    return true;
}

void calcBoard(int col, vector<string> &board, vector<vector<string>> &ans, int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row = 0; row<n; row++){
        if(isQueenPlacementPossible(row, col, board, n)){
            board[row][col] = 'Q';
            calcBoard(col+1, board, ans, n);
            board[row][col] = '.';
        }
    }
}


void nQueens(){
    int n;
    cin >> n;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for(int i=0; i<n; i++){
        board[i] = s;
    }
    calcBoard(0, board, ans, n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            for(int k=0; k<ans[i][j].size(); k++){
                cout << ans[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}

void calcBoardWithHashing(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &leftUpperDiagonal, vector<int> &leftLowerDiagonal, int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row = 0; row<n; row++){
        if(leftRow[row]==0 && leftLowerDiagonal[row+col]==0 &&leftUpperDiagonal[(n-1)+(row-col)]==0){
            board[row][col] = 'Q';
            leftRow[row] = 1;
            leftLowerDiagonal[row+col] = 1;
            leftUpperDiagonal[(n-1) + (row-col)] = 1;
            calcBoardWithHashing(col+1, board, ans, leftRow, leftUpperDiagonal, leftLowerDiagonal, n);
            leftRow[row] = 0;
            leftLowerDiagonal[row+col] = 0;
            leftUpperDiagonal[(n-1) + (row-col)] = 0;
            board[row][col] = '.';
        }
    }
}


void nQueensWithHashing(){
    int n;
    cin >> n;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for(int i=0; i<n; i++){
        board[i] = s;
    }
    vector<int> leftRow(n, 0);
    vector<int> leftUpperDiagonal((2*n)-1, 0);
    vector<int> leftLowerDiagonal((2*n)-1, 0);
    calcBoardWithHashing(0, board, ans, leftRow, leftUpperDiagonal, leftLowerDiagonal, n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            for(int k=0; k<ans[i][j].size(); k++){
                cout << ans[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}