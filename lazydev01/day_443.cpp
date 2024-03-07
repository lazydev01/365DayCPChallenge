#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void gameWithIntegers(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%3==0){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
}


int32_t main(){
    gameWithIntegers();
    return 0;
}