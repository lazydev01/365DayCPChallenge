#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void journey(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int ans = 3*(n/(a+b+c));
        n -= (ans*(a+b+c))/3;
        if(n==0){
            cout << ans << endl;
        }
        else{
            n-=min(n, a);
            ans++;
            if(n==0){
                cout << ans << endl;
            }
            else{
                n-=min(n, b);
                ans++;
                if(n==0){
                    cout << ans << endl;
                }
                else{
                    n-=min(n, c);
                    ans++;
                    if(n==0){
                        cout << ans << endl;
                    }
                }
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    journey();
    return 0;
}