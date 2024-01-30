#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void constructTheString(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        string s = "";
        while(s.size()<n){
            for(int i=0; i<b; i++){
                if(s.size()==n){
                    break;
                }
                s += ('a'+i);
            }
        }
        cout << s << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    constructTheString();
    return 0;
}