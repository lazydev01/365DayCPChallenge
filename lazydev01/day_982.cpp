#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void trickyTemplate(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        bool possible = false;
        for(int i = 0; i < n; i++){
            if(c[i] != a[i] && c[i] != b[i]){
                possible = true;
                break;
            }
        }
        if(possible){
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

    trickyTemplate();
    return 0;
}