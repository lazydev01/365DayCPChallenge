#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twoSubstrings(){
    string s;
    cin >> s;
    bool ab = false;
    bool ba = false;
    bool skip = false;
    for(int i=0; i<s.size()-1; i++){
        if(skip){
            skip = false;
            continue;
        }
        if(!ab && s[i]=='A' && s[i+1]=='B'){
            ab = true;
            skip = true;
        }
        else if(ab && !ba && s[i]=='B' && s[i+1]=='A'){
            ba = true;
            skip = true;
        }
    }
    if(ab && ba){
        cout << "YES" << endl;
    }
    else{
        ab = false;
        ba = false;
        skip = false;
        for(int i=0; i<s.size()-1; i++){
            if(skip){
                skip = false;
                continue;
            }
            if(!ba && s[i]=='B' && s[i+1]=='A'){
                ba = true;
                skip = true;
            }
            else if(ba && !ab && s[i]=='A' && s[i+1]=='B'){
                ab = true;
                skip = true;
            }
        }
        if(ab && ba){
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

    twoSubstrings();
    return 0;
}