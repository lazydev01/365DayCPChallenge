#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cricketTournament(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int matchesPlayed = 0;
        while(n>1){
            matchesPlayed += n/2;
            n = (ceil)(n/(2.0));
            
        }
        if(matchesPlayed>=m){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cricketTournament();
    return 0;
}