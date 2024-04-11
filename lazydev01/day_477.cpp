#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void wheresTheBishop(){
    
    vector<string> vp(8);
    
    
    for(int i=0; i<8; i++){
        cin >> vp[i];
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(i!=0 && i!=7 && j!=0 && j!=7 &&vp[i][j]=='#' && vp[i-1][j-1]=='#' && vp[i-1][j+1]=='#' && vp[i+1][j-1]=='#' && vp[i+1][j+1]=='#'){
                cout << (i+1) << " " << (j+1) << endl;
                return;
            }
        }
    }
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        wheresTheBishop();
    }
}