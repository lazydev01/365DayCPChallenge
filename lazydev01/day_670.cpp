#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void differentDivisors(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int nums = 1;
        for(int i=0; i<3; i++){
            nums+=n;
        }
        nums-=n;
        cout << (nums * (nums - n)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    differentDivisors();
    return 0;
}