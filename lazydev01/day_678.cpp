#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void strongPassword(){
    int t;
    cin >> t;
    while(t--){
        string password;
        cin >> password;
        bool hasInserted = false;
        for(int i=0; i<password.size()-1; i++){
            if(password[i]==password[i+1]){
                if(password[i]=='a'){
                    password.insert(password.begin()+i+1, 'b');
                }
                else{
                    password.insert(password.begin()+i+1, 'a');
                }
                hasInserted = true;
                break;
            }
        }
        if(!hasInserted){
            if(password[password.size()-1]=='a'){
                password.insert(password.end(), 'b');
            }
            else{
                password.insert(password.end(), 'a');
            }
        }
        cout << password << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    strongPassword();
    return 0;
}