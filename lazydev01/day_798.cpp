#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void equalizePricesAgain(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        cout << (int)(ceil)(sum / (n * 1.0)) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    equalizePricesAgain();
    return 0;
}