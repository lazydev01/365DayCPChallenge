#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void chewbaccaAndNumber(){
    int n;
    cin >> n;
    string ans = "";
    while(n>0){
        int rem = n%10;
        ans = to_string(min(9-rem, rem)) + ans;
        n/=10;
    }
    if(ans[0]=='0'){
        ans[0] = '9';
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    chewbaccaAndNumber();
    return 0;
}