#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

int countBits(int n){
    int i = 1;
    int count = 0;
    for(int j=0; j<=20; j++){
        if(i&n){
            count++;
        }
        i = i<<1;
    }
    return count;
}

void fedorAndNewGame(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(m+1);
    for(int i=0; i<m+1; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0; i<m; i++){
        int temp = arr[m]^arr[i];
        if(countBits(temp)<=k){
            count++;
        }
    }
    cout << count << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fedorAndNewGame();
    return 0;
}