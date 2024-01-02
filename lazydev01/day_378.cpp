#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void cardsForFriends(){
    int t;
    cin >> t;
    while(t--){
        int w, h, n;
        cin >> w >> h >> n;
        int count = 1;
        while(w%2==0){
            w/=2;
            count*=2;
            if(count>=n){
                break;
            }
        }
        while(h%2==0){
            h/=2;
            count*=2;
            if(count>=n){
                break;
            }
        }
        if(count>=n){
            cout << "YES" << endl;
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

    cardsForFriends();
    return 0;
}