#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kString(){
    int k;
    cin >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for(auto i : s){
        mp[i]++;
    }
    string single = "";
    bool valid = true;
    for(auto i: mp){
        if(i.second % k == 0){
            for(int j=0; j<(i.second/k); j++){
                single += i.first;
            }
        }
        else{
            valid = false;
            break;
        }
    }
    if(!valid){
        cout << -1 << endl;
    }
    else{
        for(int i=0; i<k; i++){
            cout << single;
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    kString();
    return 0;
}