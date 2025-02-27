#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void newWorldNewMeNewArray(){
    int t;
    cin >> t;
    while(t--){
        int n, k, p;
        cin >> n >> k >> p;
        k = abs(k);
        int operations = k/p;
        if(k%p!=0){
            operations++;
        }
        if(operations <= n){
            cout << operations << endl;
        }
        else{
            cout << -1 << endl;
        }

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    newWorldNewMeNewArray();
    return 0;
}