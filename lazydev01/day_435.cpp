#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void fileName(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int count_x = 0;
    for(auto i : s){
        if(i=='x'){
            count_x++;
            if(count_x>=3){
                count++;
            }
        }
        else{
            count_x = 0;
        }
    }
    cout << count << endl;
}

int32_t main(){
    fileName();
    return 0;
}