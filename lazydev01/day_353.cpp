#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void spellCheck(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.find('T') != string::npos && s.find('i') != string::npos && s.find('m') != string::npos && s.find('u') != string::npos && s.find('r') != string::npos && s.size()==5) {
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

    spellCheck();
    return 0;
}