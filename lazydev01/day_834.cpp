#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yetAnotherBrokenKeyboard(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, bool> mp;
    for(int i = 0; i < m; i++){
      char x;
      cin >> x;
      mp[x] = true;
    }
    int count = 0;
    int ans = 0;
    for(char c : s){
      if(mp[c]){
        count++;
      }
      else{
        ans += ((count * (count + 1)) / 2);
        count = 0;
      }
    }
    ans += ((count * (count + 1)) / 2);
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    yetAnotherBrokenKeyboard();
    return 0;
}