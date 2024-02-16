#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void kuriyamaMiraStones(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    arr.insert(arr.begin(), 0);
    int m;
    cin >> m;
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    for(int i=1; i<n+1; i++){
        arr[i] = arr[i]+ arr[i-1];
        sorted_arr[i] = sorted_arr[i]+ sorted_arr[i-1];
    }
    for(int i=0; i<m; i++){
        int type, l, r;
        cin >> type >> l >> r;
        if(type==1){
            cout << arr[r] - arr[l-1] << endl;
        }
        else{
            cout << sorted_arr[r] - sorted_arr[l-1] << endl;
        }
    }
}


int32_t main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    kuriyamaMiraStones();
    return 0;
}