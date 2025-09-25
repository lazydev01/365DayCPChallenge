#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void taisiaAndDice(){
    int t;
    cin >> t;
    while(t--){
        int n, s, r;
        cin >> n >> s >> r;
        cout << (s - r) << " ";
        for(int i = 0; i < n-1; i++){
            cout << (r / (n-1) + (r%(n-1)==0 ? 0 : 1)) << " ";
            if(r%(n-1)!=0)r--;
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    taisiaAndDice();
    return 0;
}