#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yetAnotherMatrixProblem(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1){
            cout << 1 << endl;
        }
        else if(n==2){
            cout << -1 << endl;
        }
        else{
            stack<int> odds, evens;
            for(int i=1; i<=n*n; i++){
                if(i&1){
                    odds.push(i);
                }
                else{
                    evens.push(i);
                }
            }
            bool check = false;
            vector<vector<int>> mat(n, vector<int>(n, 0));
            for(int i=0; i<n; i++){
                int count = 0;
                for(int j=0; j<=i; j++){
                    if(odds.empty()){
                        break;
                    }
                    else{
                        mat[j][i] = odds.top();   
                        odds.pop();
                        count++;
                    }
                }
                if((count+i)%2==0){
                    check = true;
                }
            }
            if(check){
                mat[n-2][0] = mat[n-2][n-2];
                mat[n-2][n-2] = 0;
            }
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(mat[i][j]==0 && !evens.empty()){
                        mat[i][j] = evens.top();
                        evens.pop();
                    }
                }
            }
            for(auto row : mat){
                for(int el : row){
                    cout << el << " ";
                }
                cout << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    yetAnotherMatrixProblem();
    return 0;
}