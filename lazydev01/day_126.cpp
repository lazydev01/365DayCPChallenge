/*

    Question -> https://www.codechef.com/problems/CHEFST

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

        int n1, n2, m;
        cin >> n1 >> n2 >> m;
        int minimum = min(n1, n2);
        int sum = (m*(m+1))/2;
        int last = min(minimum, sum);
        cout << (n1-last)+(n2 - last) << endl;

    }
    return 0;
}