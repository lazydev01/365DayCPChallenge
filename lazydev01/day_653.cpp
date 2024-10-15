#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void wonderfulColoring1(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int colorCount = 0;
        for(auto i : mp){
            if(i.second>2){
                colorCount+=2;
            }
            else{
                colorCount+=(i.second);
            }
        }
        cout << colorCount/2 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    wonderfulColoring1();
    return 0;
}