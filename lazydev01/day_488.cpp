#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void imBoredWithLife(){
    int a, b;
    cin >> a >> b;
    int n = min(a, b);
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    cout << fact << endl;
}

int32_t main(){
    imBoredWithLife();
}