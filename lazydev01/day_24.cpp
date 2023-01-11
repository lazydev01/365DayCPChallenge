/*

https://www.codechef.com/problems/CLMBSTRS

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

    vector<int> dp(1000002, 0);
    dp[1]=1;
    dp[2]=2;
    for(int i=3; i<=1000000; i++){
        dp[i] = (dp[i-1]+dp[i-2])%1000000007;
    }
    while (t--)
    {

        int n, g;
        cin >> n >> g;
        int x = dp[n];
        int count_ones = 0;
        while(x>=1){
            if(x%2==1){
                count_ones++;
            }
            x>>=1;
        }
        if(g==count_ones){
            cout << "CORRECT" << endl;
        }
        else{
            cout << "INCORRECT" << endl;
        }
    }
    return 0;
}