#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void milyaAndTwoArrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        set<int> s_a, s_b;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s_a.insert(a[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            s_b.insert(b[i]);
        }
        if(s_a.size() + s_b.size() > 3){
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

    milyaAndTwoArrays();
    return 0;
}