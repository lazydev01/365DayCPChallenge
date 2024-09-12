#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void symmetricEncoding(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, char> mp;
        vector<char> v;
        for(int i=0; i<n; i++){
            if(count(v.begin(), v.end(), s[i])==0){
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            mp[v[i]] = v[v.size()-1-i];
        }
        string ans = "";
        for(char c : s){
            ans += mp[c];
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    symmetricEncoding();
    return 0;
}