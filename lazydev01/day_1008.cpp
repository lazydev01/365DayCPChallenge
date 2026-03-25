#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void playingInACasino(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int>arr[m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int x;
                cin >> x;
                arr[j].push_back(x);
            }
        }
        for(int i = 0; i < m; i++){
            sort(arr[i].begin(), arr[i].end());
        }
        int ans = 0;
        for(int i = 0; i < m; i++){
            vector<int> res(n, 0);
            res[n-1] = arr[i][n-1];
            for(int j = n-2; j>=0; j--){
                res[j] = res[j+1]+arr[i][j];
            }
            for(int j = 0; j < n-1; j++){
                int cnt = res[j+1] - (n-1-j)*arr[i][j];
                ans += cnt;
            }
        }
        cout << ans << endl;    
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    playingInACasino();
    return 0;
}