#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void doorsAndKeys(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, char> mp;
        mp['R'] = 'r';
        mp['G'] = 'g';
        mp['B'] = 'b';
        map<char, bool> keys;
        bool isPossible = true;
        for(auto i : s){
            if(i>= 'a' && i <= 'z'){
                keys[i] = true;
            }
            else{
                if(!keys[mp[i]]){
                    isPossible = false;
                    break;
                }
            }
        }
        if(isPossible){
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

    doorsAndKeys();
    return 0;
} 