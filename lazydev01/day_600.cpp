#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void primaryTask(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() < 3 || s.substr(0, 2)!="10"){
            cout << "NO" << endl;
        }
        else{
            if(s.substr(2, s.size()-2)[0]=='0' || stoi(s.substr(2, s.size()-2)) < 2){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    primaryTask();
    return 0;
}