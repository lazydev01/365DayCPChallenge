#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void eraseFirstOrSecondLetter(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(st.find(s[i]) == st.end()){
                ans += (n - i);
            }
            st.insert(s[i]);
        }
        cout << ans << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    eraseFirstOrSecondLetter();
    return 0;
}

/*

abcde

abcde
bcde
acde
cde
bde
ade
de
ce
be
ae
a
b
c
d
e

aabcd
abcd
acd
bcd
ad
cd
bd
a
b
c
d

abcdd
bcdd
acdd
cdd
add
bdd
ad
dd
bd
cd
a
b
d
c

ababa
baba
aaba
aba
bba
ba
aa
b
a


*/