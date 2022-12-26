/*

Question -> https://www.codechef.com/problems/CHEFSOCK

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
    int a,b,c;
    cin >> a >> b >> c;
    int left_rupees = c-a;
    int number_of_socks = left_rupees/b;
    if(number_of_socks%2==0){
        cout << "LUCKY CHEF" << endl;
    }
    else{
        cout << "UNLUCKY CHEF" << endl;
    }
    return 0;
}