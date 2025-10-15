#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void beautifulArray(){
    int t;
    cin >> t;
    while(t--){
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        int extra = s - (k * b);
        if(s >= (k * b) && s <= ((k*b) + ((k-1)*(n)))){
            for(int i = 0; i < n-1; i++){
                cout << max(0ll, min(extra, k-1)) << " ";
                extra-=(k-1);
            }
            cout << (k * b) + max(extra, 0ll) << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    beautifulArray();
    return 0;
}