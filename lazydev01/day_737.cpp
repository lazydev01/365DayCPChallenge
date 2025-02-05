#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void decoding(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for(int i=0; i<n; i++){
        ans+='#';
    }
    int median = (n+1)/2 - 1;
    ans[median] = s[0];
    if(n%2==0){
        int counter = 1;
        for(int i=1; i<n; i+=2){
            if(median + counter < n){
                ans[median + counter] = s[i];
            }
            if(i + 1 < n){
                if(median - counter > -1){
                    ans[median - counter] = s[i+1];
                }
            }
            counter++;
        }
    }
    else{
        int counter = 1;
        for(int i=1; i<n; i+=2){
            if(median - counter > -1){
                ans[median - counter] = s[i];
            }
            else{
                ans[median + counter] = s[i];
            }
            if(i + 1 < n){
                if(median + counter < n){
                    ans[median + counter] = s[i+1];
                }
            }
            counter++;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    decoding();
    return 0;
}

// abcdef
// ecabd#