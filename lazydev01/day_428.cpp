#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void nastiaAndNearlyGoodNumbers(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(b==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            if(b==2){
                cout << a << " " << ((2*b)-1)*a << " " << 2*b*a << endl;
            }
            else{
                cout << a << " " << (b-1)*a << " " << (b*a) << endl;
            }
        }

    }
}

int32_t main(){
    nastiaAndNearlyGoodNumbers();
    return 0;
}