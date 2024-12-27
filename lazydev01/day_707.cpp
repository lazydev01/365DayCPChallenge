#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void littleGirlAndGame(){
    string s;
    cin >> s;
    map<char, int> mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
    }
    int odd_counter = 0;
    for(auto i : mp){
        if(i.second % 2){
            odd_counter++;
        }
    }
    if(odd_counter%2 || odd_counter==0){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    littleGirlAndGame();
    return 0;
}