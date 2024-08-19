#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void scale(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<string> mat(n);
        for(int i=0; i<n; i++){
            cin >> mat[i];
        }
        vector<string> new_mat;
        for(int i=0; i<n; i+=k){
            string str = "";
            for(int j=0; j<n; j+=k){
                str+=(mat[i][j]);
            }
            new_mat.push_back(str);
        }
        for(int i=0; i<new_mat.size(); i++){
            cout << new_mat[i] << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    scale();
    return 0;
}