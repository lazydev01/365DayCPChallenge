#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void shrink(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << 1 << " ";
        for(int i = 1; i < n-1; i++){
            cout << i+2 << " ";
        }
        cout << 2 << endl;


    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    shrink();
    return 0;
}