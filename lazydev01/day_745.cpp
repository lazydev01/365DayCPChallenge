#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void skibidusAndOhio(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool isRepeating = false;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                isRepeating = true;
                break;
            }
        }
        if(!isRepeating){
            cout << s.size() << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    skibidusAndOhio();
    return 0;
}