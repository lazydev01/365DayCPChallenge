#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void expensiveNumber(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 0;
        bool nonZeroFound = false;
        for(int i = s.size() - 1; i >= 0; i--){
            if(nonZeroFound){
                if(s[i] != '0'){
                    ans++;
                }
            }
            else{
                if(s[i] != '0'){
                    nonZeroFound = true;
                    continue;
                }
                ans++;
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    expensiveNumber();
    return 0;
}

/*
5001530228607387000000




*/