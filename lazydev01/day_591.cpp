#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void vacations(){
    int n;
    cin >> n;
    int dp[101][3];
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    for(int i=1; i<=n; i++){
        int k;
        cin >> k;
        dp[i][0] = min({dp[i-1][0], dp[i-1][1], dp[i-1][2]}) + 1;
        if(k==1 || k==3){
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        }
        else{
            dp[i][1] = dp[i-1][1] + 1;
        }
        if(k==2 || k==3){
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        }
        else{
            dp[i][2] = dp[i-1][2] + 1;
        }
    }
    cout << min({dp[n][0], dp[n][1], dp[n][2]}) << endl;

}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vacations();
    return 0;
}