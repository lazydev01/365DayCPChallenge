#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void printAPedestal(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min_blocks = n-6;
        int each_blocks = min_blocks/3;
        int remaining_blocks = min_blocks % 3;
        cout << (each_blocks + 2 + (remaining_blocks==2?1:0)) << " " << (each_blocks + 3 + (remaining_blocks>=1?1:0)) << " " << (each_blocks + 1) << endl;
    }
}

int32_t main(){
    printAPedestal();
    return 0;
}