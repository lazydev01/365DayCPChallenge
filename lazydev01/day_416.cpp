#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void polycarpAndTheDayOfPi(){
    int t;
    cin >> t;
    while(t--){
        string in;
        cin >> in;
        string pi = "314159265358979323846264338327";
        int count = 0;
        for(int i=0; i<in.size(); i++){
            if(pi[i]==in[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }
}

int32_t main(){
    polycarpAndTheDayOfPi();
    return 0;
}