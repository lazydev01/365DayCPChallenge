#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void myFirstSortingProblem(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << " " << max(x,y) << endl;
    }
}

void rockPaperScissors(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        int ans = 1;
        for(int i = 0; i < n-1;){
            if(flag){
                flag = false;
                ans++;
            }
            else if(s[i]==s[i+1]){
                flag = true;
            }
            else{
                ans++;
            }
            i++;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // myFirstSortingProblem();
    rockPaperScissors();
    return 0;
}