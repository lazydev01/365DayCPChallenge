#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void giantWheel(){
    int n;
    cin >> n;
    if(n>=60){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

void swappingMarksDigits(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        string reversed_a = string(a.rbegin(), a.rend());
        string reversed_b = string(b.rbegin(), b.rend());
        if(stoi(a)>stoi(b) || stoi(reversed_a)>stoi(b) || stoi(reversed_a)>stoi(reversed_b) || stoi(a)>stoi(reversed_b)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main(){
    // giantWheel();
    swappingMarksDigits();
    return 0;
}