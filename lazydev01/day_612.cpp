#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool isVowel(char c){
    if(c=='a' || c=='e'){
        return true;
    }
    return false;
}

void unnaturalLanguageProcessing(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool vowel = false;
        bool consonant = false;
        for(int i=0; i<n; i++){
            if(vowel && consonant){
                if(i!=n-1){
                    if(!isVowel(s[i+1])){
                        cout << s[i] << ".";
                        vowel = false;
                        consonant = false;
                    }
                    else{
                        cout << "." << s[i];
                        vowel = false;
                    }
                }
                else{
                    cout << s[i];
                }
            }
            else{
                if(isVowel(s[i])){
                    vowel = true;
                }
                else{
                    consonant = true;
                }
                cout << s[i];
            }
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    unnaturalLanguageProcessing();
    return 0;
}