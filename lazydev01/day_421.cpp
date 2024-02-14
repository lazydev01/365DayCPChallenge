#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void notQuiteLatinSquare(){
    int t;
    cin >> t;
    while(t--){
        string s1;
        string s2;
        string s3;
        cin >> s1 >> s2 >> s3;
        bool flag_a = false;
        bool flag_b = false;
        bool flag_c = false;
        bool flag_q = false;
        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='A') flag_a = true;
            if(s1[i]=='B') flag_b = true;
            if(s1[i]=='C') flag_c = true;
            if(s1[i]=='?') flag_q = true;
        }
        if(flag_q){
            if(flag_a && flag_b){
                cout << "C" << endl;
            }
            else if(flag_a && flag_c){
                cout << "B" << endl;
            }
            else{
                cout << "A" << endl;
            }
            continue;
        }
        flag_a = false;
        flag_b = false;
        flag_c = false;
        for(int i=0; i<s1.size(); i++){
            if(s2[i]=='A') flag_a = true;
            if(s2[i]=='B') flag_b = true;
            if(s2[i]=='C') flag_c = true;
            if(s2[i]=='?') flag_q = true;
        }
        if(flag_q){
            if(flag_a && flag_b){
                cout << "C" << endl;
            }
            else if(flag_a && flag_c){
                cout << "B" << endl;
            }
            else{
                cout << "A" << endl;
            }
            continue;
        }
        flag_a = false;
        flag_b = false;
        flag_c = false;
        for(int i=0; i<s1.size(); i++){
            if(s3[i]=='A') flag_a = true;
            if(s3[i]=='B') flag_b = true;
            if(s3[i]=='C') flag_c = true;
            if(s3[i]=='?') flag_q = true;
        }
        if(flag_q){
            if(flag_a && flag_b){
                cout << "C" << endl;
            }
            else if(flag_a && flag_c){
                cout << "B" << endl;
            }
            else{
                cout << "A" << endl;
            }
            continue;
        }
    }
}

int32_t main(){
    notQuiteLatinSquare();
    return 0;
}