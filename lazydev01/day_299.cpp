#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

  Question -> https://www.codechef.com/problems/OCTATHON

*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int x;
    cin >> x;
    if(x<3){
      cout << "GOLD" << endl;
    }
    else if(x<6){
      cout << "SILVER" << endl;
    }
    else{
      cout << "BRONZE" << endl;
    }
    return 0;
}