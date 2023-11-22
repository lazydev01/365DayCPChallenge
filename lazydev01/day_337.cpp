#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void encodingMessage(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        for(int i=0; i<n; i+=2){
            if(i!=n-1){
                swap(s[i], s[i+1]);
                s[i] = (char)(26 - (s[i] - 'a' + 1) + 'a');
                s[i+1] = (char)(26 - (s[i+1] - 'a' + 1) + 'a');
            }
            else{
                s[i] = (char)(26 - (s[i] - 'a' + 1) + 'a');
            }
        }
        cout << s << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    encodingMessage();
    return 0;
}