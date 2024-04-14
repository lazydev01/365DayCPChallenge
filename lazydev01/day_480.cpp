#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void palindromicSubstrings(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ones = 0, zeroes = 0;
        for(char i : str){
            if(i=='1'){
                ones++;
            }
            else{
                zeroes++;
            }
        }
        if(n==1){
            cout << "BOB" << endl;
        }
        else if(abs(ones-zeroes) >= 2){
            if(n%2){
                cout << "BOB" << endl;
            }
            else{
                cout << "ALICE" << endl;
            }
        }
        else{
            if(n%2){
                cout << "ALICE" << endl;
            }
            else{
                cout << "BOB" << endl;
            }
        }
    }
}

void onedEraser(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        for(int i=0; i<n;){
            if(s[i]=='B'){
                ans++;
                i+=k;
            }
            else{
                i++;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // palindromicSubstrings();
    onedEraser();
    return 0;
}

/*

111000111000111

11000111000111

1000111000111

100111000111

10111000111

1011000111

101000111

011110

01110

0110

010

10

*/