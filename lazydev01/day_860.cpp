#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void havingBeenATreasurerInThePastIHelpGoblinsDeceive(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int underscores = 0;
        int hyphen = 0;
        for(char c : s){
            if(c == '-'){
                hyphen++;
            }
            else{
                underscores++;
            }
        }
        cout << fixed << setprecision(0) << ((hyphen/2) * underscores * (ceil)((hyphen / 2.0) )) << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    havingBeenATreasurerInThePastIHelpGoblinsDeceive();
    return 0;
}

/*

-_--_--_-

-----___-

15 + 12 + 9 + 6 + 3 = 


_------

---_---

_-_-_-_-_-

---_____--

*/