#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minMaxSwap(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int j=0; j<n; j++){
            cin >> b[j];
        }
        int max_a = INT_MIN;
        int max_b = INT_MIN;
        for(int i=0; i<n; i++){
            max_a = max(max_a, min(a[i], b[i]));
            max_b = max(max_b, max(a[i], b[i]));
        }
        cout << max_a * max_b << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minMaxSwap();
    return 0;
}