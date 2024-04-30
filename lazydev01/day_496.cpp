#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void pashmakAndGarden(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, x4, y3, y4;
    if(x1-x2==0 && (y1-y2)!=0){
        int diff = abs(y1-y2);
        x3 = x1 + diff;
        y3 = y1;
        x4 = x2+diff;
        y4 = y2;
    }
    else if(y1-y2==0 && x1-x2!=0){
        int diff = abs(x1-x2);
        x3 = x1;
        x4 = x2;
        y3 = y1+diff;
        y4 = y2+diff;
    }
    else if(x1-x2!=0 && y1-y2!=0 && abs(x1-x2)==abs(y1-y2)){
        int diff = abs(x1-x2);
        if(x1<x2){
            x3 = x1+diff;
            x4 = x2-diff;
            y3 = y1;
            y4 = y2;
        }
        else{
            x4 = x2+diff;
            x3 = x1-diff;
            y3 = y1;
            y4 = y2;
        }
    }
    else{
        cout << -1 << endl;
        return;
    }
    cout << x3 << " " <<  y3 << " " << x4 << " " << y4 << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    pashmakAndGarden();
    return 0;
}