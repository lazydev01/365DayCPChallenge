#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void newPalindrome(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        int count = 0;
        for(auto i : mp){
            if(count > 1){
                break;
            }
            if(i.second > 1){
                count++;
            }
        }
        if(count > 1){
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

    newPalindrome();
    return 0;
}