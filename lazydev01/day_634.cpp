#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void teamCompositionProgrammersAndMathematicians(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int maxTeams = min(a, b);
        maxTeams = min(maxTeams, (a+b)/4);
        cout << maxTeams << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    teamCompositionProgrammersAndMathematicians();
    return 0;
}