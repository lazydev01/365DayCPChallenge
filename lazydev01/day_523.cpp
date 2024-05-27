#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void insertDigit(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char d;
        cin >> n >> d;
        string s;
        cin >> s;
        int index = n;
        for(int i=0; i<s.size(); i++){
            if(s[i]-'0' < d - '0'){
                index = i;
                break;
            }
        }
        s.insert(index, 1, d);
        cout << s << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    insertDigit();
    return 0;
}