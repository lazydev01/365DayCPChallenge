#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yetnotherrokenKeoard(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        stack<pair<char, int>> lowers; 
        stack<pair<char, int>> uppers;
        for(int i = 0; i < n; i++){
            if(s[i]>='a' && s[i]<= 'z'){
                if(s[i] == 'b'){
                    if(!lowers.empty()){
                        lowers.pop();
                    }
                }
                else{
                    lowers.push(make_pair(s[i], i));
                }
            }
            else{
                if(s[i] == 'B'){
                    if(!uppers.empty()){
                        uppers.pop();
                    }
                }
                else{
                    uppers.push(make_pair(s[i], i));
                }
            }
        }
        string ans = "";
        while(!lowers.empty() && !uppers.empty()){
             if(lowers.top().second > uppers.top().second){
                ans += lowers.top().first;
                lowers.pop();
             }
             else{
                ans += uppers.top().first;
                uppers.pop();
             }
        }
        while(!lowers.empty()){
            ans += lowers.top().first;
            lowers.pop();
        } 
        while(!uppers.empty()){
            ans += uppers.top().first;
            uppers.pop();
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    yetnotherrokenKeoard();
    return 0;
}