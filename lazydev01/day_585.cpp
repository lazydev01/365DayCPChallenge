#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void angryMonk(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(k);
        int maxi = INT_MIN;
        for(int i=0; i<k; i++){
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }
        cout << (2 * (n - maxi) - (k - 1)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    angryMonk();
    return 0;
}