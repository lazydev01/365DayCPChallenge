#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void jugglingLetters(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<char, int> mp;
        for(int i=0; i<n; i++){
            string s;
            cin >> s;
            for(int j=0; j<s.size(); j++){
                mp[s[j]]++;
            }
        }
        bool canJuggle = true;
        for(auto i: mp){
            if(i.second%n!=0){
                canJuggle = false;
                break;
            }
        }
        if(canJuggle){
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

    jugglingLetters();
    return 0;
}