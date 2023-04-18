/*

    Question -> https://www.codechef.com/problems/ADAMAT

*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> row(n);
        vector<vector<int>> mat(n, row);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> mat[i][j];
            }
        }
        if(n==1){
            cout << 0 << endl;
        }
        else{
            vector<int> flag(n);
            flag[0]=0;
            for(int i=1; i<n; i++){
                if(mat[0][i]!=i+1){
                    flag[i] = 1;
                }
                else{
                    flag[i] = 0;
                }
                // cout << flag[i] << endl;
            }
            int count = 0;
            for(int i=n-1; i>0; i--){
                if(flag[i]==1){
                    flag[i]=0;
                    count++;
                    for(int j=i-1; j>0; j--){
                        flag[j]^=1;
                    }
                }
            }
            
            cout << count << endl;
        }

    }
    return 0;
}