#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void chefAndChapters(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        cout << x*y*z << endl;
    }
}

void qingshanLovesStrings(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool flag = false;
        char ch = 'a';
        bool hasRepetition = false;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                hasRepetition = true;
            }
        }
        bool isTGood = true;
        if(hasRepetition){
            if(true){}
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    chefAndChapters();
    return 0;
}