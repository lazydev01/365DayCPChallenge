#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void internationalEducationDay(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b) * c << endl;
}

void literacyRate(){
    int t;
    cin >> t;
    while(t--){
        int p, l;
        cin >> p >> l;
        int literacyRate = (l/(p*1.0))*100;
        if(literacyRate>=75){
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

    // internationalEducationDay();
    literacyRate();
    return 0;
}