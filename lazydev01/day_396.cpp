#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void earlyPhone(){
    int x;
    cin >> x;
    int lastTwoDigits = x - ((x/100)*100);
    if(lastTwoDigits < 10){
        cout << "K0" << lastTwoDigits << endl;
    }
    else{
        cout << "K" << lastTwoDigits << endl;
    }
}

void spellShorting(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        int index = n-1;
        for(int i=0; i<n-1; i++){
            if(s[i]-'a' > s[i+1]-'a'){
                index = i;
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(i!=index){
                ans += s[i];
            }
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // earlyPhone();
    spellShorting();
    return 0;
}