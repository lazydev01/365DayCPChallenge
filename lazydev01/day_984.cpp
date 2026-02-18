#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void removeTwoLetters(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int repeated = 0;
        for(int i = 2; i < n; i++){
            if(s[i-2] == s[i]){
                repeated++;
            }
        }
        cout << n-1-repeated << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    removeTwoLetters();
    return 0;
}

/*

abcdef

aabbcc


*/