#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void redVersusBlue(){
    int t;
    cin >> t;
    while(t--){
        int n, r, b;
        cin >> n >> r >> b;
        int div = r / (b + 1);
        int rem = r % (b + 1);
        string ans = "";
        for(int i = 0; i < b; i++){
            if(i < rem){
                for(int j = 0; j < div+1; j++){
                    ans += 'R';
                }
            }
            else{
                for(int j = 0; j < div; j++){
                    ans += 'R';
                }
            }
            ans += 'B';
        }
        for(int j = 0; j < div; j++){
            ans += 'R';
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    redVersusBlue();
    return 0;
}