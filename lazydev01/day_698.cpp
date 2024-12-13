#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void verifyPassword(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool passwordCorrect = true;
        bool isDigit = false;
        if(s[0]>='0' && s[0]<='9'){
            isDigit = true;
        }
        char curr = s[0];
        for(int i=1; i<n; i++){
            if(isDigit){
                if(s[i]>='a' && s[i]<='z'){
                    isDigit = false;
                }
                else if(s[i]>='0' && s[i]<='9' && curr <= s[i]){
                    passwordCorrect = true;
                }
                else{
                    passwordCorrect = false;
                    break;
                }
            }
            else{
                if(s[i]>='a' && s[i]<='z' && curr <= s[i]){
                    passwordCorrect = true;
                }
                else{
                    passwordCorrect = false;
                    break;
                }
            }
            curr = s[i];
        }
        if(passwordCorrect){
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

    verifyPassword();
    return 0;
}