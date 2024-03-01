#include<bits/stdc++.h>
using namespace std;

void oddSelection(){
    int t;
    cin >> t;
    while(t--){
        int x, n;
        cin >> n >> x;
        vector<int> arr(n);
        int sum = 0;
        int odd_count = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(auto i : arr){
            sum+=i;
            if(i%2==1){
                odd_count++;
            }
        }
        if(n==x){
            if(sum%2==0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else if(odd_count==0){
            cout << "NO" << endl;
        }
        else if(odd_count==n && x%2==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }
}

int32_t main(){
    oddSelection();
    return 0;
}