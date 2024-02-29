#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void kDivisibleSum(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(n>k){
            int mul = (ceil)(n/(k*1.0));
            k = k * mul;
        }
        cout << fixed << (int)(ceil)(k/(n*1.0)) << endl;
    }
}

int32_t main(){

    kDivisibleSum();
    return 0;
}