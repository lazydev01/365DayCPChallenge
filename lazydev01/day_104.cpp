/*

    Question -> https://www.codechef.com/problems/ONEORTWO

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

        int x, y;
        cin >> x >> y;
        
        if(abs(x-y)==1 && min(x, y)%2==0){
            cout << "CHEFINA" << endl;
        }
        else if(abs(x-y)==1 && min(x, y)%2!=0){
            cout << "CHEF" << endl;
        }
        else if(x==y && x%2==0){
            cout << "CHEFINA" << endl;
        }
        else if(x==y && x%2!=0){
            cout << "CHEF" << endl;
        }
        else if(x>y){
            cout << "CHEF" << endl;
        }
        else{
            cout << "CHEFINA" << endl;
        }

    }
    return 0;
}