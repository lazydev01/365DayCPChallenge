#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void bachgoldProblem(){
    int n;
    cin >> n;
    if(n%2==0){
        cout << n/2 << endl;
        for(int i=0; i<(n/2); i++){
            cout << 2 << " ";
        }
        cout << endl;
    }
    else{
        n-=3;
        cout << (n/2) + 1 << endl;
        for(int i=0; i<(n/2); i++){
            cout << 2 << " ";
        }
        cout << 3 << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    bachgoldProblem();
    return 0;
}