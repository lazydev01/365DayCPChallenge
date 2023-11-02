#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void qingshanLovesStrings(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool sRepeats = false, tRepeats = false;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                sRepeats = true;
                break;
            }
        }
        if(!sRepeats){
            cout << "YES" << endl;
        }
        else{
            for(int i=0; i<t.size()-1; i++){
                if(t[i]==t[i+1]){
                    tRepeats = true;
                    break;
                }
            }
            bool isZero = false;
            if(tRepeats || t[0]!=t[t.size()-1]){
                cout << "NO" << endl;
            }
            else{
                if(t[0]=='0'){
                    isZero = true;
                }
                bool notGood = false;
                if(isZero){
                    for(int i=0; i<s.size()-1; i++){
                        if(s[i]==s[i+1] && s[i]=='0'){
                            notGood = true;
                            break;
                        }
                    }
                }
                else{
                    for(int i=0; i<s.size()-1; i++){
                        if(s[i]==s[i+1] && s[i]=='1'){
                            notGood = true;
                            break;
                        }
                    }
                }
                if(notGood){
                    cout << "NO" << endl;
                }
                else{
                    cout << "YES" << endl;
                }
            }
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    qingshanLovesStrings();
    return 0;
}