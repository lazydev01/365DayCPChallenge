#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void problemC(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int in;
        cin >> in;
        int len = s.size();
        int ans = 0;
        int i = 1;
        while(ans <= len){
            for(int j=0; j<len-i; j++){
                s += s[j];
            }
            ans += i;
            i++;
        }
        cout << s[in-1];
    }
}

void vasyaAndSocks(){
    int n, x;
    cin >> n >> x;
    int ans = n;
    int rem = 0;
    while(n>=x){
        ans += (n/x);
        rem += (n%x);
        n/=x;
    }
    while(rem>=x){
        ans += (rem/x);
        rem/=x;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vasyaAndSocks();
    return 0;
}