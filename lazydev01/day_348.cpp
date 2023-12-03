#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void marbles(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c = 0;
        int a1 = a;
        int b1 = b;
        if(a>=b){
            while(a%b!=0 && a1%b1!=0){
                c++;
                a--;
                b++;
                a1++;
                b1--;
            }
	    }
        else{
	        while(a1%b1!=0){
                c++;
                a1++;
                b1--;
            }
	    }
        cout << c << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    marbles();
    return 0;
}