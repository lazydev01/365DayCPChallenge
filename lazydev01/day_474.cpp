#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"


void zeroOneGame(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        for(char i : s){
            mp[i]++;
        }
        if(min(mp['0'], mp['1'])%2){
            cout << "DA" << endl;
        }
        else{
            cout << "NET" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    zeroOneGame();
    return 0;
}
