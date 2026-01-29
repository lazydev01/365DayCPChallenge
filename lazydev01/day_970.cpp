#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimumLCM(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = 1;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                a = n/i;
                break;
            }
        }
        cout << a << " " << n-a << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minimumLCM();
    return 0;
}

/*

14 7
18 3


1
5
25

49

1 7 49

7 42 = 42
14 35 = 
21 28
28 21
35 14
42 7

*/