#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool isSuneetWinner(int a1, int a2, int b1, int b2){
    if((a1>b1 && a2>b2) || (a1==b1 && a2>b2) || (a1>b1 && a2==b2)){
        return true;
    }
    return false;
}

void cardGame(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int count = 0;
        if(isSuneetWinner(a1, a2, b1, b2)){
            count++;
        }
        if(isSuneetWinner(a1, a2, b2, b1)){
            count++;
        }
        if(isSuneetWinner(a2, a1, b1, b2)){
            count++;
        }
        if(isSuneetWinner(a2, a1, b2, b1)){
            count++;
        }
        cout << count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cardGame();
    return 0;
}