#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void canISquare(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int sum = 0;
        for(auto i : arr){
            sum+=i;
        }
        double sqrt_sum = sqrt(sum);
        if(sqrt_sum == (int)sqrt_sum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main(){
    canISquare();
    return 0;
}