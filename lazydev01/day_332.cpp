#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void rivalry(){
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    if((x1 + y1) > (x2 + y2)){
        cout << "Dominater" << endl;
    }
    else{
        cout << "Everule" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    rivalry();
    return 0;
}