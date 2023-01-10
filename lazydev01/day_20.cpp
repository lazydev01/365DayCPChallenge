/*

Question -> https://www.codechef.com/problems/PAJAPONG

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

        int x, y, k;
        cin >> x >> y >> k;
        int sum = x+y;
        int ans = sum/k;
        if(ans%2!=0){
            cout << "Paja" << endl;
        }
        else{
            cout << "Chef" << endl;
        }

    }
    return 0;
}