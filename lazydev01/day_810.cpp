#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void squareYear() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int year = stoi(s);
        bool isSquareYear = false;
        for(int i=0; i<=100; i++){
            if(i*i == year){
                isSquareYear = true;
                cout << 0 << " " << i << endl;
            }
        }
        if(!isSquareYear){
            cout << -1 << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    squareYear();
    return 0;
}