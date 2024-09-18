#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void dzyLovesChessboard(){
    int n, m;
    cin >> n >> m;
    vector<string> chessboard(n);
    for(int i=0; i<n; i++){
        cin >> chessboard[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(chessboard[i][j]=='-'){
                cout << '-';
                continue;
            }
            if((i+j)%2==0){
                cout << 'B';
            }
            else{
                cout << 'W';
            }
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    dzyLovesChessboard();
    return 0;
}