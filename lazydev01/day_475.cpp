#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void cipherShifer(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        bool skip = false;
        char curr_char;
        for(char i : s){
            if(skip){
                if(i==curr_char){
                    skip = false;
                }
            }
            else{
                ans+=i;
                curr_char = i;
                skip = true;
            }
        }
        cout << ans << endl;

    }
}

int32_t main(){
    cipherShifer();
    return 0;
}