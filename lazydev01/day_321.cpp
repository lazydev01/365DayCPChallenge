#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void guessTheWinner(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==0 || n==1){
            cout << "Bob" << endl;
        }
        else{
            cout << "Alice" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    guessTheWinner();
    return 0;
}