#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    vector<int> fibb;
    fibb.push_back(0);
    fibb.push_back(1);
    int ind = 1;
    while(fibb[ind]<=2e5){
        fibb.push_back(fibb[ind] + fibb[ind-1]);
        ind++;
    }

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        cout << n << k << endl;
        if(n<fibb[k-1]){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
        t--;

    }
    return 0;
}
