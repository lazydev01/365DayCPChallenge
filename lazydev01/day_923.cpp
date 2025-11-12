#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lastYearsSubstring(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string lastYear = "2020";
        bool found = false;
        for(int i = 0; i <= 4; i++){
            string tmp = "";
            for(int j = 0; j < i; j++){
                tmp += s[j];
            }
            for(int j = n - 4 + i ; j < n; j++){
                tmp += s[j];
            }
            if(tmp == lastYear){
                found = true;
                break;
            }
        }
        if(found){
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

    lastYearsSubstring();
    return 0;
}