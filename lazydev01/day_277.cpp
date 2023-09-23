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

    Question -> https://codeforces.com/problemset/problem/1676/A


*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        string s;
        cin >> s;
        int s1 = 0;
        int s2 = 0;
        for(int i=0; i<6; i++){
            if(i<3){
                s1 += s[i];
            }
            else{
                s2 += s[i];
            }
        }
        if(s1==s2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}