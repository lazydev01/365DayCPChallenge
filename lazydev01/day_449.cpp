#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void systemOfEquations(){
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int a=0; a<=sqrt(n); a++){
        int b = n - (a * a);
        if((a+(b*b))==m){
            cnt++;
        }
    }
    cout << cnt << endl;
}

int32_t main(){
    systemOfEquations();
    return 0;
}