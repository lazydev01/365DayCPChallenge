#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void magicalWorld(){
    int t;
    cin >> t;
    while(t--){
        int a, b, x;
        cin >> a >> b >> x;
        int sq_area = x*x;
        int rect_len = min(a, b);
        int rect_area = a*b;
        if(sq_area>=rect_area){
            cout << 0 << endl;
        }
        else if(sq_area>=rect_len){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    magicalWorld();
    return 0;
}