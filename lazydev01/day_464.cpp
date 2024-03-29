#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void sashaAndArrayColoring(){
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
        sort(arr.begin(), arr.end());
        for(int i=0; i<(n+1)/2; i++){
            sum += (arr[n-1-i] - arr[i]);
        }
        cout << sum << endl;
    }
}

int32_t main(){
    sashaAndArrayColoring();
    return 0;
}