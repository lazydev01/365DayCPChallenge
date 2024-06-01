#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimumVariedNumber(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string ans = "";        
        for(char i='9'; i>'0'; i--){
            if(n> (i-'0')){
                ans+=i;
                n-=(i-'0');
            }
            else{
                ans+=to_string(n);
                break;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}

int gcd(int a, int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 

void stringLCM(){
    int t;
    cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        int len_s = s.size();
        int len_t = t.size();
        int len_lcm = (len_s * len_t)/gcd(len_s, len_t);
        string s1 = "", s2 = "";
        for(int i=0; i<len_lcm/len_s; i++){
            s1 += s;
        }
        for(int i=0; i<len_lcm/len_t; i++){
            s2 += t;
        }
        if(s1==s2){
            cout << s1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

void theCakeIsALie(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        cout << ((n*m-1)==k ? "YES" : "NO") << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // minimumVariedNumber();
    // stringLCM();
    theCakeIsALie();
    return 0;
}

/*

###
###
###





*/