#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aboveTheClouds(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans = false;
        vector<int> flag(26, 0);
        for(int i = 1; i < s.size() - 1; i++){
            if(flag[s[i] - 'a'] > 0){
                ans = true;
                break;
            }
            flag[s[i] - 'a']++;
        }
        if(flag[s[0] - 'a'] > 0 || flag[s[s.size() - 1] - 'a'] > 0)ans = true;
        if(ans){
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

    aboveTheClouds();
    return 0;
}