#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void palindromeGame(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int countZeros = 0;
        for(auto i : s){
            if(i == '0'){
                countZeros++;
            }
        }
        if(countZeros == 1 || countZeros % 2 == 0) cout << "BOB" << endl;
        else cout << "ALICE" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    palindromeGame();
    return 0;
}