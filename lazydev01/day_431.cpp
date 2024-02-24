#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void healthySleep(){
    int n;
    cin >> n;
    if(n<8){
        cout << "LESS" << endl;
    }
    else if(n==8){
        cout << "PERFECT" << endl;
    }
    else{
        cout << "MORE" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    healthySleep();
    return 0;
}