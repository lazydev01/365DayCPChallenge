#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void antiTriangle(){
    int t;
    cin >> t;
    while(t--){
        int n, l;
        cin >> n >> l;
        for(int i=1; i<=min(n, l/2); i++){
            cout << i << " ";
        }
        int num = l/2;
        for(int i=l/2; i<n; i++){
            num+=(l);
            cout << num << " ";
            
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    antiTriangle();    
    return 0;
}