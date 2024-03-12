#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void andThenThereWereK(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int log_n = log2(n);
        int ans = 1;
        for(int i=0; i<log_n; i++){
            ans*=2;
        }
        ans-=1;
        cout << ans << endl;
    }
}

int32_t main(){
    andThenThereWereK();
    return 0;
}