#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void deletionOfTwoAdjacentLetters(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool flag = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]==c && i%2==0){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main(){
    deletionOfTwoAdjacentLetters();
    return 0;
}