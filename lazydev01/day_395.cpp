#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void wordOnThePaper(){
    int t;
    cin >> t;
    while(t--){
        vector<string> mat(8);
        for(int i=0; i<8; i++){
            cin >> mat[i];
        }
        string ans = "";
        int row_index = -1;
        int col_index = -1;
        bool flag = false;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(mat[i][j]!='.'){
                    row_index = i;
                    col_index = j;
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        while(row_index<8 && mat[row_index][col_index]!='.'){
            ans += mat[row_index][col_index];
            row_index++;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    wordOnThePaper();
    return 0;
}