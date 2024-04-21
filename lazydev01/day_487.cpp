#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void alternatingBinaryString(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flipped = false;
        char start = s[0];
        int count = 0;
        for(int i = 1; i < n; i++){
            if(i%2){
                if(flipped){
                    if(start!=s[i]){
                        count++;
                        flipped=!flipped;
                    }
                }
                else{
                    if(start==s[i]){
                        count++;
                        flipped = !flipped;
                    }
                }
            }
            else{
                if(flipped){
                    if(start==s[i]){
                        count++;
                        flipped=!flipped;
                    }
                }
                else{
                    if(start!=s[i]){
                        count++;
                        flipped = !flipped;
                    }
                }
            }
        }
        cout << count << endl;
    }
}

int32_t main(){
    alternatingBinaryString();
    return 0;
}