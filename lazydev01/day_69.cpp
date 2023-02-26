/*

    Quesion -> https://www.codechef.com/problems/CNTWRD

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

int sumOfDigit(int n){
    int sum = 0;
    while(n>0){
        sum += (n%10);
        n = n/10;
    }
    return sum;
}

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
        cout << n*m << endl;



    }
    return 0;
}