#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void erasingZeroes(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int prev_index = -1;
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                if(prev_index==-1){
                    prev_index = i;
                }
                else{
                    ans += (i-prev_index-1);
                    prev_index = i;
                }
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    erasingZeroes();
    return 0;
}