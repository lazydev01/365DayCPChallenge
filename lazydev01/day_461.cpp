#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void kanaAndDragonQuestGame(){
    int t;
    cin >> t;
    while(t--){
        int h, n, m;
        cin >> h >> n >> m;
        while((h/2)<(h-10) && n>0){
            h = (h/2)+10;
            n--;
        }
        h-=(10*m);
        if(h<=0){
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

    kanaAndDragonQuestGame();
    return 0;
}