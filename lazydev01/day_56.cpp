/*

    Question -> https://www.codechef.com/problems/SPSUM

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

        int n, m;
        cin >> n >> m;
        int summation = (n*(n+1))/2;
        int diff = summation - m;
        if(diff < 0 || diff%2!=0){
            cout << "No" << endl;
        }
        else{
            int firstNum = diff/2;
            int secondNum = firstNum + m;
            int gcd_1_2 = __gcd(firstNum, secondNum);
            if(gcd_1_2 == 1){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }

    }
    return 0;
}