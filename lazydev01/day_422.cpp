#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define endl "\n"

void makeItWhite(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int start_index = -1;
        int end_index = -1;
        for(int i=0; i<n; i++){
            if(s[i]=='B'){
                start_index = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i]=='B'){
                end_index = i;
                break;
            }
        }
        cout << (end_index - start_index + 1) << endl;
    }
}

int32_t main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    makeItWhite();
    return 0;
}