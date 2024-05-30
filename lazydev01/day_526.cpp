#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void brackets(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int balance = 0;
        int max_balance = 0;
        for(auto i : s){
            if(i=='('){
                balance++;
            }
            else{
                balance--;
            }
            max_balance = max(max_balance, balance);
        }
        string ans = "";
        for(int i = 0; i<max_balance; i++){
            ans+='(';
        }
        for(int i = 0; i<max_balance; i++){
            ans+=')';
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    brackets();
    return 0;
}