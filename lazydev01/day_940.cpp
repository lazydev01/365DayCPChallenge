#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void roofConstruction(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int msb = log2(n-1);
        int num = pow(2, msb);
        for(int i = num - 1; i >= 0; i--){
            cout << i << " ";
        }
        for(int i = num; i < n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    roofConstruction();
    return 0;
}

/*

2 0 1

2 1 0

4 0 3 2 1

4 6 3 2 0 8 9 1 7 5
2+5+1+2+8+1+8+6+2
37

7 6 5 4 3 2 1 0 8 9
1+3+1+7+1+3+1+8+1







*/