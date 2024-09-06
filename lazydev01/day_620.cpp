#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void berlandPoker(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int individualCards = n/k;
        if(m<=individualCards){
            cout << m << endl;
        }
        else{
            int maxPlayerCards = individualCards;
            int remainingJokers = m - individualCards;
            int secondMaxPlayerCards = (ceil)(remainingJokers/((k-1)*1.0));
            cout << maxPlayerCards - secondMaxPlayerCards << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    berlandPoker();
    return 0;
}