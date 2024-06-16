#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void pascalsTriangleVariation1(){
    int r, c;
    cin >> r >> c;
    int res = 1;
    for(int i=0; i<c-1; i++){
        res = res * (r-1-i);
        res = res / (i+1);
    }
    cout << res << endl;
}

void pascalsTriangleVariation2(){
    int n;
    cin >> n;
    int ans = 1;
    cout << ans << " ";
    for(int i=1; i<n; i++){
        ans = (ans*((n-1)-(i-1)));
        ans = (ans/i);
        cout << ans << " ";
    }
    cout << endl;
}

void pascalsTriangleVariation3(){
    int n;
    cin >> n;
    vector<vector<int>> pascalsTriangle(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || i==j){
                pascalsTriangle[i][j] = 1;
            }
            else{
                pascalsTriangle[i][j] = pascalsTriangle[i-1][j] + pascalsTriangle[i-1][j-1];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << pascalsTriangle[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // pascalsTriangleVariation1();
    // pascalsTriangleVariation2();
    pascalsTriangleVariation3();
    return 0;
}