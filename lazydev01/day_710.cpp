#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void swapAndDelete(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int ans = n;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(mp['0']>0){
                    mp['0']--;
                }
                else{
                    ans = i;
                    break;
                }
            }
            else{
                if(mp['1']>0){
                    mp['1']--;
                }
                else{
                    ans = i;
                    break;
                }
            }
        }
        cout << n-ans << endl;

    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    swapAndDelete();
    return 0;
}

/*

111100010
0000111

0110



*/