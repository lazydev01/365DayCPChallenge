#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yesYes(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int index = -1;
        bool isValid = false;
        if(s[0] == 'Y'){
            index = 0;
            isValid = true;
        }
        else if(s[0]=='e'){
            index = 1;
            isValid = true;
        }
        else if(s[0] == 's'){
            index = 2;
            isValid = true;
        }
        if(!isValid){
            cout << "NO" << endl;
            continue;
        }
        string base = "Yes";
        for(int i = 1; i <s.size(); i++){
            if(index == 2) index = 0;
            else index++;
            if(s[i]!=base[index]){
                isValid = false;
                break;
            }
        }
        if(!isValid){
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

    yesYes();
    return 0;
}