#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void thornsAndCoins(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for(int i=0; i<n; i++){
            if(i!=n-1 && s[i]==s[i+1] && s[i]=='*') break;
            if(s[i]=='@') count++;
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    thornsAndCoins();
    return 0;
}