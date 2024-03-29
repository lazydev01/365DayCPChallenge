#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void twoElevators(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int firstEl = abs(a-1);
        int secondEl = abs(b-c) + abs(c-1);
        if(firstEl == secondEl){
            cout << 3 << endl;
        }
        else if(firstEl < secondEl){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
}

void chefProduct(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sqrroot = sqrtl(n);
        if(n%2==0 && sqrroot%2==1){
            sqrroot--;
        }
        cout << (sqrroot+1)/2 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // twoElevators();
    chefProduct();
    return 0;
}

/*

7
1 3 5



*/