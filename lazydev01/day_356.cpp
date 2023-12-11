#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void newYearCandles(){
    int a, b;
    cin >> a >> b;
    int hrs = a;
    while(a>=b){
        hrs += (a/b);
        a = (a/b) + (a%b);
    }
    cout << hrs << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    newYearCandles();
    return 0;
}