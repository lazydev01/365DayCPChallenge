#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fixYou(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int count = 0;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            for(int j = 0; j < m; j++){
                if(i < n-1 && j < m-1){}
                else if(i < n-1 && s[j] != 'D'){
                    count++;
                }
                else if(j < m-1 && s[j] != 'R'){
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fixYou();
    return 0;
}