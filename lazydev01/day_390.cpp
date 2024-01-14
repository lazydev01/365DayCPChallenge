#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void accessControl(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        int swipes = 0;
        bool flag = false;
        for(auto i : s){
            if(i=='0'){
                swipes--;
            }
            else{
                swipes = x;
            }
            if(swipes<0){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    accessControl();
    return 0;
}