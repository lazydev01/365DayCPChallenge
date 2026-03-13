#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void strangeBirthdayParty(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(m);
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        int ans = 0;
        int p = 0;
        for(int i = 0; i < n; i++){
            if(p < m && b[p] <= b[a[i] - 1]){
                ans += b[p];
                p++;
            }
            else{
                ans += b[a[i] - 1];
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    strangeBirthdayParty();
    return 0;
}