#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void notAdjacentMatrix(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==2){
            cout << -1 << endl;
            continue;
        }
        vector<vector<int>> mat(n, vector<int>(n));
        int first = 1;
        int second = (n*n)/2 + 1;
        if(n%2) second++;
        bool firstTurn = true;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(firstTurn){
                    mat[i][j]=first;
                    first++;
                }
                else{
                    mat[i][j]=second;
                    second++;
                }
                firstTurn = !firstTurn;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    notAdjacentMatrix();
    return 0;
}