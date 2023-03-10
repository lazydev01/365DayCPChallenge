/*

    Question -> https://www.codechef.com/problems/SLAB

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
        int tax = 0;
        if(n<=250000){
            cout << n << endl;
            continue;
        }
        if(n>250000.0){
            int temp = (min(500000ll, n) - 250000.0);
            tax += ((temp*5)/100.0);
        }
        if(n>500000.0){
            int temp = (min(750000ll, n) - 500000.0);
            tax += ((temp*10)/100.0);
        }
        if(n>750000.0){
            int temp = (min(10000000ll, n) - 750000.0);
            tax += ((temp*15)/100.0);
        }
        if(n>10000000.0){
            int temp = (min(12500000ll, n) - 10000000.0);
            tax += ((temp*20)/100.0);
        }
        if(n>12500000.0){
            int temp = (min(15000000ll, n) - 12500000.0);
            tax += ((temp*25)/100.0);
        }
        if(n>15000000.0){
            int temp = n - 15000000.0;
            tax += ((temp*30)/100.0);
        }
        cout << fixed << (int)(n-tax) << endl;

    }
    return 0;
}