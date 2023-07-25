#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool solveSudoku(vector<vector<char>> &board){
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board.size(); j++){
            if(board[i][j]=='.'){
                for(char k = '1'; k<='9'; k++){
                    if(isValid(board, i, j, k)){
                        board[i][j] = k;
                        if(solveSudoku(board)==true){
                            return true;
                        }
                        else{
                            board[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

bool isValid(vector<vector<char>> &board, int row, int col, char k){
    for(int i=0; i<9; i++){
        if(board[i][col]==k){
            return false;
        }
        if(board[row][i]==k){
            return false;
        }
        if(board[3*(row/3) + i/3][3*(col/3) + i%3]==k){
            return false;
        }
    }
    return true;
}

void sudokuSolver(){
    vector<vector<char>> sudoku(9, vector<char>(9));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> sudoku[i][j];
        }
    }
    if(solveSudoku(sudoku)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void mColoring(){
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}