#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void roundDownThePrice(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int log_n = log10(n);
        int ans = 1;
        for(int i=0; i<log_n; i++){
            ans *=10;
        }
        cout << n-ans << endl;
    }
}

int32_t main(){
    roundDownThePrice();
    return 0;
}