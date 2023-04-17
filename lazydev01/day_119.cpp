/*

    Question -> https://www.codechef.com/problems/CHRECT

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

        int n, m, k;
        cin >> n >> m >> k;
        if(n==1 && m==1){
            cout << 0 << endl;
        }
        else if((n==1 && m==2) || (m==1 && n==2)){
            cout << 0 << endl;
        }
        else if(n==1 || m==1){
            cout << k << endl;
        }
        else{
            if(k%2!=0){
                cout << (k/2)+1 << endl;
            }
            else{
                cout << k/2 << endl;
            }
        }

    }
    return 0;
}