#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void prefiquence(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0;
        int j = 0;
        while(i<s1.size() && j<s2.size()){
            if(s1[i] == s2[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        cout << i << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    prefiquence();
    return 0;
}