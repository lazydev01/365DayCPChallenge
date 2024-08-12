#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void showering(){
    int t;
    cin >> t;
    while(t--){
        int n, s, k;
        cin >> n >> s >> k;
        pair<int, int> curr;
        pair<int, int> prev = make_pair(0, 0);
        int maxHours = 0;
        for(int i=0; i<n; i++){
            int a, b;
            cin >> a >> b;
            maxHours = max(maxHours, a-prev.second);
            prev = make_pair(a, b);
        }
        maxHours = max(maxHours, k-prev.second);
        if(maxHours >= s){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    showering();
    return 0;
}