#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void repeatingCipher(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    ans+=s[0];
    int i = 1;
    int curr = 0;
    while(curr+i<n){
        curr+=i;
        i++;
        ans+=s[curr];
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    repeatingCipher();
    return 0;
}