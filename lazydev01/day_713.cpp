#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void omkarAndLastClassOfMath(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==0){
            cout << n/2 << " " << n/2 << endl;
        }
        else{
            int maxFactor = INT_MIN;
            for(int i=2; i*i<=n; i++){
                if(n%i==0){
                    maxFactor = max(maxFactor, max(i, n/i));
                }
            }
            if(maxFactor==INT_MIN){
                cout << 1 << " " << n-1 << endl;
            }
            else{
                cout << maxFactor << " " << maxFactor*((n/maxFactor)-1) << endl;
            }
            
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    omkarAndLastClassOfMath();
    return 0;
}