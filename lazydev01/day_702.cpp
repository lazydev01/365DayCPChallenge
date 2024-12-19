#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void normalProblem(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='p'){
                cout << 'q';
            }
            else if(s[i]=='q'){
                cout << 'p';
            }
            else{
                cout << s[i];
            }
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    normalProblem();
    return 0;
}