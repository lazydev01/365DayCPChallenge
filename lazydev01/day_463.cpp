#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void recoveringASmallString(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "";
        for(int i=0; i<3; i++){
            if(n>26+(2-i)){
                ans = 'z' + ans;
                n-=26;
            }
            else if(n==0){
                ans = 'a' + ans;
            }
            else{
                ans = (char)((n-(2-i)-1)+'a') + ans;
                n=0;
            }
        }
        cout << ans << endl;
    }
}

int32_t main(){
    recoveringASmallString();
    return 0;
}