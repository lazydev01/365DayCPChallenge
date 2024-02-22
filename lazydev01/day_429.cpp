#include<bits/stdc++.h>
using namespace std;

#define int long long int

void freeIceCream(){
    int n, x;
    cin >> n >> x;
    int distressed_count = 0;
    for(int i=0; i<n; i++){
        char ch;
        int d;
        cin >> ch >> d;
        if(ch == '+'){
            x+=d;
        }
        else{
            if(d<=x){
                x-=d;
            }
            else{
                distressed_count++;
            }
        }
    }
    cout << x << " " << distressed_count << endl;
}

int32_t main(){
    freeIceCream();
    return 0;
}