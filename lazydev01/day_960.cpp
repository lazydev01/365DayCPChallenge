#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void socialExperiment(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n <= 3) {
            cout << n << endl;
            continue;
        }
        if(n%2 == 0){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    socialExperiment();
    return 0;
}