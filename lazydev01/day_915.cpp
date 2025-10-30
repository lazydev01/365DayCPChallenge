#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yourName(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        map<char, int> mp1, mp2;
        for(int i = 0; i < n; i++){
            mp1[a[i]]++;
            mp2[b[i]]++;
        }
        bool valid = true;
        for(auto i : mp1){
            if(i.second != mp2[i.first]){
                valid = false;
                break;
            }
        }
        if(valid){
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

    yourName();
    return 0;
}