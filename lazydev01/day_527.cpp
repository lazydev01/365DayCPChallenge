#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void isItACat(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        string test = "meowx";
        int it = 0;
        bool ans = true;
        if(s[0]!='m'){
            cout << "NO" << endl;
            continue;
        }
        for(int i=1; i<n; i++){
            if(s[i]!=s[i-1] && s[i]!=test[it+1]){
                ans = false;
                break;
            }
            else if(s[i]!=s[i-1]){
                it++;
            }
        }
        if(test[it]!='w'){
            ans = false;
        }
        if(ans){
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

    isItACat();
    return 0;
}