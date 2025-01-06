#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lineBreaks(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int strip1Length = 0;
        string s;
        int count = 0;
        for(int i=0; i<n; i++){
            cin >> s;
            if(s.size()+strip1Length <= m){
                count++;
            }
            strip1Length+=s.size();
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    lineBreaks();
    return 0;
}