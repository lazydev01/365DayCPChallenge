#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cards(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for(char c : s){
        mp[c]++;
    }
    int zeros = mp['z'];
    int ones = mp['n'];
    for(int i = 0; i < ones; i++){
        cout << 1 << " ";
    }
    for(int i = 0; i < zeros; i++){
        cout << 0 << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cards();
    return 0;
}