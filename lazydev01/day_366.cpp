#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void nightAtTheMuseum(){
    string s;
    cin >> s;
    int count = 0;
    char curr = 'a';
    for(auto ch : s){
        int cw = ch - curr;
        if(cw<0){
            cw += 26;
        }
        int acw = 'z' - ch + curr - 'a' + 1;
        if(acw>=26){
            acw -= 26;
        }
        curr = ch;
        count += min(cw, acw);
    }
    cout << count << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    nightAtTheMuseum();
    return 0;
}