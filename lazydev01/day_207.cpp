#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"



/*

    Question -> https://www.codechef.com/problems/MVR

*/
void messiVsRonaldo(){
    int a, b, x, y;
    cin >> a >> b >> x >>y;
    if((2*a + b)>(2*x + y)){
        cout << "Messi" << endl;
    }
    else if((2*a + b)<(2*x + y)){
        cout << "Ronaldo" << endl;
    }
    else{
        cout << "Equal" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}