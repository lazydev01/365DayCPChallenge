#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void jzzhuAndChildren(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int ans_ind = -1;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        tmp = (ceil)(tmp/(m*1.0));
        if(ans <= tmp){
            ans = tmp;
            ans_ind = i+1;
        }
    }
    cout << ans_ind << endl;
}

int32_t main(){
    jzzhuAndChildren();
}