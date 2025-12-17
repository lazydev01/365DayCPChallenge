#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void notQuiteAPalindromicString(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cZero = 0;
        int cOne = 0;
        for(auto i : s){
            if(i == '0'){
                cZero++;
            }
            else{
                cOne++;
            }
        }
        int reqPairs = (n - (2 * k)) / 2;
        if(cZero >= reqPairs && cOne >= reqPairs && (cOne - reqPairs) % 2 == 0 && (cZero - reqPairs) % 2 == 0){
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

    notQuiteAPalindromicString();
    return 0;
}
/*

10 2
1101011001

1010011101

000010

000111
*/