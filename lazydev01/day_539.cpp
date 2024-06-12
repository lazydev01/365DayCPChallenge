#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void creatingWords(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        char temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a << " " << b << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    creatingWords();
    return 0;
}