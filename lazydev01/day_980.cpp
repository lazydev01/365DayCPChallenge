#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void uploadMoreRam(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << ((n-1)*k) + 1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    uploadMoreRam();
    return 0;
}