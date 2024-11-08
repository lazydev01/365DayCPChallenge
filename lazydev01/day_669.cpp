#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void downloadMoreRam(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> memory(n);
        vector<int> ram(n);
        for(int i=0; i<n; i++){
            cin >> memory[i];
        }
        for(int i=0; i<n; i++){
            cin >> ram[i];
        }
        vector<pair<int, int>> vp;
        for(int i=0; i<n; i++){
            vp.push_back(make_pair(memory[i], ram[i]));
        }
        sort(vp.begin(), vp.end());
        for(int i=0; i<n; i++){
            if(k<vp[i].first){
                break;
            }
            else{
                k+=vp[i].second;
            }
        }
        cout << k << endl;
    }
}

void fillSudoku(vector<vector<char>> &board, vector<vector<char>> &row, vector<vector<char>> &col, vector<vector<char>> &subBox, vector<pair<int, int>> &emptyCells){
    if(emptyCells.empty()){
        return;
    }
    int i = emptyCells[0].first;
    int j = emptyCells[0].second;
    int index = 3*(i/3) + j/3;
    for(int in=1; in<=9; in++){
        char ch = '0' + in;
        if(find(row[i].begin(), row[i].end(), ch)==row[i].end() && find(col[j].begin(), col[j].end(), ch)==col[j].end() && find(subBox[index].begin(), subBox[index].end(), ch)==subBox[index].end()){
            board[i][j] = ch;
            row[i].push_back(ch);
            col[j].push_back(ch);
            subBox[index].push_back(ch);
            emptyCells.erase(emptyCells.begin());
            fillSudoku(board, row, col, subBox, emptyCells);
            if(emptyCells.empty()) return;
            emptyCells.insert(emptyCells.begin(), make_pair(i, j));
            row[i].erase(find(row[i].begin(), row[i].end(), ch));
            col[j].erase(find(col[j].begin(), col[j].end(), ch));
            subBox[index].erase(find(subBox[index].begin(), subBox[index].end(), ch));
            board[i][j]='.';
        }
    }
}

void sudokuSolver(){
    vector<vector<char>> board(9, vector<char>(9));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> board[i][j];
        }
    }
    vector<vector<char>> ans(9, vector<char>(9, '.'));
    vector<vector<char>> row(9, vector<char>());
    vector<vector<char>> col(9, vector<char>());
    vector<vector<char>> subBox(9, vector<char>());
    vector<pair<int, int>> emptyCells;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(board[i][j]=='.'){
                emptyCells.push_back(make_pair(i, j));
            }
            else{
                row[i].push_back(board[i][j]);
                col[j].push_back(board[i][j]);
                int index = 3*(i/3) + j/3;
                subBox[index].push_back(board[i][j]);
            }
        }
    }
    fillSudoku(board, row, col, subBox, emptyCells);
    for(int i=0; i<board.size(); i++){
        for(int j=0; j<board[i].size(); j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // downloadMoreRam();
    sudokuSolver();
    return 0;
}

/*

5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9

Debugging : 
5 3 1 2 7 4 . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9


[["5","3","4","6","7","8","9","1","2"],["6","7","2","1","9","5","3","4","8"],["1","9","8","3","4","2","5","6","7"],["8","5","9","7","6","1","4","2","3"],["4","2","6","8","5","3","7","9","1"],["7","1","3","9","2","4","8","5","6"],["9","6","1","5","3","7","2","8","4"],["2","8","7","4","1","9","6","3","5"],["3","4","5","2","8","6","1","7","9"]]

5 3 4 6 7 8 9 1 2
6 7 2 1 9 5 3 4 8
1 9 8 3 4 2 5 6 7
8 5 9 7 6 1 4 2 3
4 2 6 8 5 3 7 9 1
7 1 3 9 2 4 8 5 6
9 6 1 5 3 7 2 8 4
2 8 7 4 1 9 6 3 5
3 4 5 2 8 6 1 7 .
*/