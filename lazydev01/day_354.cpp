#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void exams(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y >> z;
        if(z>((x*y)/2.0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

bool isVowel(char c){
    vector<char> vowels = {'A', 'E', 'I', 'O', 'U'};
    if(find(vowels.begin(), vowels.end(), c)!=vowels.end()){
        return true;
    }
    return false;
}

void reachCodeTown(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string c = "CODETOWN";
        bool flag = false;
        for(int i=0; i<8; i++){
            if(!((isVowel(c[i]) && isVowel(s[i])) || (!isVowel(c[i]) && !isVowel(s[i])))){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // exams();
    reachCodeTown();
    return 0;
}