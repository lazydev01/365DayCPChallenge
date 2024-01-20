#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void earlyPhone(){
    int x;
    cin >> x;
    int lastTwoDigits = x - ((x/100)*100);
    if(lastTwoDigits < 10){
        cout << "K0" << lastTwoDigits << endl;
    }
    else{
        cout << "K" << lastTwoDigits << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    earlyPhone();
    return 0;
}