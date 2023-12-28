#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aplusb(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << (s[0]- '0') + (s[2] - '0') << endl;
    }
}

void makeAllEqual(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int> b(n);
        for(int i=0; i<n; i++){
            b[i] = maxi - arr[i];
        }
        int cnt = 0;
        for(int i=0; i<n; i++){
            cnt += b[i];
        }
        int ans = *max_element(b.begin(), b.end());
        int ans2 = (cnt + m - 1)/m;
        cout << max(ans, ans2) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // aplusb();
    makeAllEqual();
    return 0;
}