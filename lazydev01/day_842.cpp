#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minority(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        int count_1 = 0;
        int count_0 = 0;
        for(auto i : s){
            if(i == '0') count_0++;
            else count_1++;
        }
        if(count_0 == count_1){
            cout << max(0ll, min(count_0, count_1) - 1) << endl;
        }
        else{
            cout << min(count_0, count_1) << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    minority();
    return 0;
}