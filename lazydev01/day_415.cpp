#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void theNumberOfPositions(){
    int n, a, b;
    cin >> n >> a >> b;
    cout << min((n-a), (b+1)) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    theNumberOfPositions();
    return 0;
}