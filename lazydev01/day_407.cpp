#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cplusequalto(){
    int t;
    cin >> t;
    while(t--){
        int a, b, n;
        cin >> a >> b >> n;
        if(a>b){
            int c = b;
            b = a;
            a = c;
        }
        int count = 0;
        while(a<=n && b<=n){
            a+=b;
            count++;
            if(a>n){
                break;
            }
            b+=a;
            count++;
        }
        cout << count << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cplusequalto();
    return 0;
}