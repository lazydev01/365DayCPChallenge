#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void johnnyAndAncientComputer(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int cnt1 = 0;
        int cnt2 = 0;
        while(a%2==0){
            a/=2;
            cnt1++;
        }
        while(b%2==0){
            b/=2;
            cnt2++;
        }
        if(a!=b){
            cout << -1 << endl;
        }
        else{
            int diff = abs(cnt1 - cnt2);
            if(diff == 0){
                cout << 0 << endl;
            }
            else{
                cout << (ceil)((diff * 1.0) / 3) << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    johnnyAndAncientComputer();
    return 0;
}