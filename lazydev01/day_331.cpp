#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void allNewCodechef(){
    int x, y;
    cin >> x >> y;
    if(x>y){
        cout << "New" << endl;
    }
    else if(x==y){
        cout << "Same" << endl;
    }
    else{
        cout << "Old" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    allNewCodechef();
    return 0;
}