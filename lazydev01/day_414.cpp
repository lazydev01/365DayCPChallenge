#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"

void twoGram(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for(int i=0; i<n-1; i++){
        mp[s.substr(i, 2)]++;
    }
    string ans = "";
    int maxi = 0;
    for(auto i : mp){
        if(i.second>maxi){
            maxi = i.second;
            ans = i.first;
        }
    }
    cout << ans << endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    twoGram();
    return 0;
}