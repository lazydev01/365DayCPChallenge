#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void allDistinct(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        for(auto i : arr){
            mp[i]++;
        }
        int diff = n - mp.size();
        if(diff%2){
            cout << mp.size()-1 << endl;
        }
        else{
            cout << mp.size() << endl;
        }
    }
}

int32_t main(){
    allDistinct();
    return 0;
}