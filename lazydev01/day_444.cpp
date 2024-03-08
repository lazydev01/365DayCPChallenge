#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void cypher(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<string> pattern(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            cin >> pattern[i];
        }
        for(int i=0; i<n; i++){
            for(auto j : pattern[i]){
                if(j=='U'){
                    if(arr[i]==0){
                        arr[i]=9;
                    }
                    else{
                        arr[i]--;
                    }
                }
                else{
                    if(arr[i]==9){
                        arr[i]=0;
                    }
                    else{
                        arr[i]++;
                    }
                }
            }
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int32_t main(){
    cypher();
    return 0;
}