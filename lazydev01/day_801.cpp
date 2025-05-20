#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void avtoBus(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==1 || n<4){
            cout << -1 << endl;
            continue;
        }
        int min = n/6;
        if(n%6!=0) min++;
        int max = n/4;
        cout << min << " " << max << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    avtoBus();
    return 0;
}