#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void problemGenerator(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }
        int ans = 0;
        for(char c = 'A'; c <= 'G'; c++){
            if(mp[c] < m ){
                ans += (m-mp[c]);
            }
        }
        cout << ans << endl;
    }
}

void game23(){
    int x, y;
    cin >> x >> y;
    if(y%x!=0){
        cout << -1 << endl;
        return;
    }
    int div = y/x;
    int ans = 0;
    while(div!=1){
        if(div%2==0){
            div/=2;
            ans++;
        }
        else if(div%3==0){
            div/=3;
            ans++;
        }
        else{
            cout << -1 << endl;
            return;
        }
    }
    cout << ans << endl;
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // problemGenerator();
    game23();
    return 0;
}