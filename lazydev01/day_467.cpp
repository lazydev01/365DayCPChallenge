#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void triangularSwaps(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = n-2;
        bool hasTrio = false;
        for(int i=0; i<n-3; i++){
            if(s[i]==s[i+1] && s[i]==s[i+2]){
                hasTrio = true;
                count--;
            }
            else if((s[i]==s[i+1] && s[i]==s[i+3])){
                count--;
            }
        }
        if(s[n-3]==s[n-2] && s[n-3]==s[n-1]){
                hasTrio = true;
                count--;
            }
        cout << count+hasTrio << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    triangularSwaps();
    return 0;
}

/*

123 -> 231
aba -> baa
aab -> aba
baa -> aab


aabaa
abaaa
abaaa
aaaab
aaca
acaa
acaa


aaaae
aaaae


aaaaa

1234567

abc
 bcd

bcad
acdb

aaabc

aaaabc
aabac
aacba

aaaabc

aaaabc
aaaabc
aaabac
aaacab


caccccc

acccccc
cccaccc
ca

aaabbb

aaabbb
aababb
aabbab
aaabbb
*/