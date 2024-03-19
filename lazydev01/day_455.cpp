#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void turtlePuzzleRearrangeAndNegate(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(auto i : arr){
            if(i<0){
                i = i * -1;
            }
            ans+=i;
        }
        cout << ans << endl;
    }
}

int32_t main(){
    turtlePuzzleRearrangeAndNegate();
    return 0;
}