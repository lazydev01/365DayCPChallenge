#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mahmoudAndLongestUncommonSubsequence(){
    string a, b;
    cin >> a >> b;
    if(a!=b){
        cout << max(a.size(), b.size()) << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mahmoudAndLongestUncommonSubsequence();
    return 0;
}