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

    Question -> https://codeforces.com/problemset/problem/1791/A

*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    string s = "codeforces";
    int t;
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        bool flag = true;
        for(int i=0; i<s.size(); i++){
            if(s[i]==c){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}