#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void magicNumbers(){
    string s;
    cin >> s;
    if(s[0]!='1'){
        cout << "NO" << endl;
        return;
    }
    int count_4 = 0;
    for(int i=1; i<s.size(); i++){
        if(s[i]!='1' && s[i]!='4'){
            cout << "NO" << endl;
            return;
        }
        else if(s[i]=='4'){
            count_4++;
        }
        else{
            count_4 = 0;
        }
        if(count_4>2){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main(){
    magicNumbers();
    return 0;
}