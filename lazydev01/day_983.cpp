#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fairNumbers(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = -1;
        for(int i = n; i <= n + 2520; i++){
            int tmp = i;
            while(tmp > 0){
                int rem = tmp % 10;
                if(rem != 0 && i%rem != 0) break;
                tmp = tmp / 10; 
            }
            if(tmp == 0){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fairNumbers();
    return 0;
}