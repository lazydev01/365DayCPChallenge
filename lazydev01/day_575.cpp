#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void shovelsAndSwords(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if((2*a) <= b){
            cout << a << endl;
        }
        else if((2*b) <= a){
            cout << b << endl;
        }
        else{
            cout << (a+b)/3 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    shovelsAndSwords();
    return 0;
}
/*

15 15
5 10

9 3
3 0




*/