#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void ternaryXor(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = "", b = "";
        bool a_greater = false;
        for(char c : s){
            if(c-'0'==0){
                a+='0';
                b+='0';
            }
            else if(c-'0'==1){  
                if(a_greater){
                    a+='0';
                    b+='1';
                }
                else{
                    a+='1';
                    b+='0';
                    a_greater = true;
                }
            }
            else{
                if(a_greater){
                    a+='0';
                    b+='2';
                }
                else{
                    a+='1';
                    b+='1';
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ternaryXor();
    return 0;
}