#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void comparingTShirtSizes(){
    int t;
    cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        map<char, int> mp_s;
        map<char, int> mp_t;
        for(auto i : s){
            mp_s[i]++;
        }
        for(auto i : t){
            mp_t[i]++;
        }
        char ch;
        if(mp_s['S']==1){
            if(mp_t['S']==1){
                if(mp_s['X']>mp_t['X']) ch = '<';
                else if(mp_s['X']<mp_t['X']) ch = '>';
                else ch = '=';
            }
            else if(mp_t['M']==1){
                ch = '<';
            }
            else{
                ch = '<';
            }
        }
        else if(mp_s['M']==1){
            if(mp_t['S']==1){
                ch = '>';
            }
            else if(mp_t['M']==1){
                ch = '=';
            }
            else{
                ch = '<';
            }
        }
        else{
            if(mp_t['S']==1){
                ch = '>';
            }
            else if(mp_t['M']==1){
                ch = '>';
            }
            else{
                if(mp_s['X']>mp_t['X']) ch = '>';
                else if(mp_s['X']<mp_t['X']) ch = '<';
                else ch = '=';
            }
        }
        cout << ch << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    comparingTShirtSizes();
    return 0;
}