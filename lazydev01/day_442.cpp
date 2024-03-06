#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void colorfulStones(){
    string s;
    string t;
    cin >> s >> t;
    int index = 1;
    for(int i=0; i<t.size(); i++){
        if(t[i]==s[index-1]){
            index++;
        }
    }
    cout << index << endl;
}

int32_t main(){
    colorfulStones();
    return 0;
}