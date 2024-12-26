#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void specialCharacters(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==0){
            cout << "YES" << endl;
            char curr = 'A';
            for(int i=0; i<n/2; i++){
                for(int j=0; j<2; j++){
                    cout << curr;
                }
                if(curr=='A'){
                    curr = 'B';
                }
                else{
                    curr = 'A';
                }
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    specialCharacters();
    return 0;
}