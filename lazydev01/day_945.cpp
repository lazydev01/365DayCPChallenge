#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void brrBrrPatapim(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> ans(2*n);
        set<int> s;
        int leftNum = (2*n * (2*n + 1))/2;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int x;
                cin >> x;
                ans[i+j-1] = x;
                if(s.count(x) == 0){
                    leftNum -= x;
                }
                s.insert(x);
            }
        }
        cout << leftNum << " ";
        for(int i = 1; i < 2*n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    brrBrrPatapim();
    return 0;
}