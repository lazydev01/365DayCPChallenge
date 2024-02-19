#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void chefAndString(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string left = s.substr(1, s.size()-1) + s[0];
        string right = s[s.size()-1] + s.substr(0, s.size() - 1);
        if(left==right){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    chefAndString();
    return 0;
}