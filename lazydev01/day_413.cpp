#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void square(){
    int t;
    cin >> t;
    while(t--){
        int a1, b1, a2, b2, a3, b3, a4, b4;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4; 
        vector<pair<int, int>> vp;
        vp.push_back(make_pair(a1, b1));
        vp.push_back(make_pair(a2, b2));
        vp.push_back(make_pair(a3, b3));
        vp.push_back(make_pair(a4, b4));
        sort(vp.begin(), vp.end());
        int side = abs(vp[1].second - vp[0].second);
        cout << side * side << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    square();
    return 0;
}