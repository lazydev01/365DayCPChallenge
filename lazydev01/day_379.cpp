#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void followingDirections(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool flag = false;
        for(auto i : s){
            if(i=='L'){
                x--;
            }
            else if(i=='R'){
                x++;
            }
            else if(i=='U'){
                y++;
            }
            else{
                y--;
            }
            if(x==1 && y==1){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    followingDirections();
    return 0;
}