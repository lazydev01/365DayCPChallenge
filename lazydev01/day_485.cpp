#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void yogurtSale(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int ans = 0;
        if(2*a > b){
            ans += ((n/2)*b);
            if(n%2){
                ans+=a;
            }
        }
        else{
            ans+=(n*a);
        }
        cout << ans << endl;
    }
}

int32_t main(){
    yogurtSale();
    return 0;
}