#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void binaryCut(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0;
        int zeroOnes = 0;
        int currCh = s[0];
        for(int i = 1; i < n; i++){
            if(s[i] != currCh){
                if(s[i] == '1' && zeroOnes==0){
                    zeroOnes++;
                }
                else{
                    ans++;
                }
            }
            currCh = s[i];
        }
        cout << ans+1 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    binaryCut();
    return 0;
}