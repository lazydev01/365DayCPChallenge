#include<bits/stdc++.h>
using namespace std;

#define int long long int

void sameParitySummands(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k>n){
            cout << "NO" << endl;
        }
        else{
            if(k%2==1 && n%2==0){
                if(n<(k*2)){
                    cout << "NO" << endl;
                }
                else{
                    cout << "YES" << endl;
                    for(int i=0; i<k-1; i++){
                        cout << 2 << " ";
                    }
                    cout << (n-(2*(k-1))) << endl;
                }
            }
            else if(n%2==1 && k%2==0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
                for(int i=0; i<k-1; i++){
                    cout << 1 << " ";
                }
                cout << (n-(k-1)) << endl;
            }
        }
    }
}

int32_t main(){
    sameParitySummands();
    return 0;
}