#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void settingUpCamp(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int ans = a;
        if(b%3==0){
            ans+=(ceil)(((b+c)*1.0)/3);
        }
        else{
            if(c >= (3-(b%3))){
                ans+=(ceil)(((b+c)*1.0)/3);
            }
            else{
                ans = -1;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    settingUpCamp();
    return 0;
}