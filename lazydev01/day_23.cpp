/*

https://www.codechef.com/problems/HOWMANYMAX

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
        string str;
        cin >> str;
        int count = 1;
        for(int i=0; i<n-2; i++){
            if(str[i]=='1' && str[i+1]=='0'){
                count++;
            }
        }
        cout << count << endl;

    }
    return 0;
}