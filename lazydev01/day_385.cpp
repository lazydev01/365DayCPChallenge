#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mostUnstableArray(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n==1){
            cout << 0 << endl;
        }
        else if(n==2){
            cout << m << endl;
        }
        else{
            cout << 2*m << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mostUnstableArray();
    return 0;
}

/*

1000000000
2000000000





*/