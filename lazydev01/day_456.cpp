#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void targetPractice(){
    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        for(int i=1; i<=10; i++){
            string s;
            cin >> s;
            for(int j=1; j<=s.size(); j++){
                int temp_i = i;
                int temp_j = j;
                if(temp_i>5){
                    temp_i = (11 - temp_i);
                }
                if(temp_j>5){
                    temp_j = (11 - temp_j);
                }
                if(s[j-1]=='X'){
                    // cout << temp_i << " " << temp_j << endl;
                    ans += (min(temp_i, temp_j));
                }
            }
        }
        cout << ans << endl;
    }
}

int32_t main(){
    targetPractice();
    return 0;
}