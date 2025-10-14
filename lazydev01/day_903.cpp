#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void theSecretNumber(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x = 10;
        vector<int> ans;
        while(x+1 <= n){
            if(n%(x+1) == 0){
                ans.push_back(n / (x+1));
            }
            x*=10;
        }
        cout << ans.size() << endl;
        if(ans.size() > 0){
            for(int i = ans.size() - 1; i>=0; i--){
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    theSecretNumber();
    return 0;
}