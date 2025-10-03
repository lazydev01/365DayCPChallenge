#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mexorMixup(){
    int t;
    cin >> t;
    vector<int> xOrArr(3e5 + 1);
    for(int i = 1; i < (3e5 + 1); i++){
        xOrArr[i] = xOrArr[i-1] ^ i;
    }
    while(t--){
        int a, b;
        cin >> a >> b;
        int xOr = xOrArr[a-1];
        if(xOr == b){
            cout << a << endl;
        }
        else if((xOr ^ b) == a){
            cout << a + 2 << endl;
        }
        else{
            cout << a + 1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mexorMixup();
    return 0;
}