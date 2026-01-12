#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rudolphAndTicTacToe(){
    int t;
    cin >> t;
    while(t--){
        string r1, r2, r3;
        cin >> r1 >> r2 >> r3;
        bool draw = true;
        if(r1[0] == r1[1] && r1[1] == r1[2] && r1[0] != '.'){
            cout << r1[0] << endl;
            draw = false;
            continue;
        }
        if(r2[0] == r2[1] && r2[1] == r2[2] && r2[0] != '.'){
            cout << r2[0] << endl;
            draw = false;
            continue;
        }
        if(r3[0] == r3[1] && r3[1] == r3[2] && r3[0] != '.'){
            cout << r3[0] << endl;
            draw = false;
            continue;
        }
        if(r1[0] == r2[0] && r2[0] == r3[0] && r1[0] != '.'){
            cout << r1[0] << endl;
            draw = false;
            continue;
        }
        if(r1[1] == r2[1] && r2[1] == r3[1] && r1[1] != '.'){
            cout << r1[1] << endl;
            draw = false;
            continue;
        }
        if(r1[2] == r2[2] && r2[2] == r3[2] && r1[2] != '.'){
            cout << r1[2] << endl;
            draw = false;
            continue;
        }
        if(r1[0] == r2[1] && r2[1] == r3[2] && r1[0] != '.'){
            cout << r1[0] << endl;
            draw = false;
            continue;
        }
        if(r3[0] == r2[1] && r2[1] == r1[2] && r3[0] != '.'){
            cout << r3[0] << endl;
            draw = false;
            continue;
        }
        if(draw){
            cout << "DRAW" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    rudolphAndTicTacToe();
    return 0;
}