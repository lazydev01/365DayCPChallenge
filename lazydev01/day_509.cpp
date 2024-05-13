#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeEven(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = to_string(n);
        bool containsEven = false;
        for(int i=0; i<s.size(); i++){
            if((s[i]-'0')%2==0){
                containsEven = true;
                break;
            }
        }
        if(!containsEven){
            cout << -1 << endl;
            continue;
        }
        if(n%2==0){
            cout << 0 << endl;
            continue;
        }
        if((s[0]-'0')%2==0){
            cout << 1 << endl;
            continue;
        }
        cout << 2 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeEven();
    return 0;
}