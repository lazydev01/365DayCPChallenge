#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void parallelepiped(){
    int ab, bc, ac;
    cin >> ab >> bc >> ac;
    int a = sqrt((ab * ac)/bc);
    int b = sqrt((ab * bc)/ac);
    int c = sqrt((bc * ac)/ab);
    cout << 4 * (a + b + c) << endl; 
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    parallelepiped();
    return 0;
}