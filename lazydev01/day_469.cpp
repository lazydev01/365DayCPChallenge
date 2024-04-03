#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void party(){
    int max_count = 0;
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++){
        int j = i;
        int count = 0;
        while(j!=-1){
            j = arr[j];
            count++;
        }
        max_count = max(max_count, count);
    }
    cout << max_count << endl;
}

int32_t main(){
    party();
    return 0;
}