/*

    Question -> https://www.codechef.com/problems/BINTREE

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

        int i, j;
        cin >> i >> j;
        int count = 0;
        while(i!=j){
            if(i>j){
                i/=2;
                count++;
            }
            else{
                j/=2;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}