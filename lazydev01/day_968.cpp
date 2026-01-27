#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void dbmbAndTheArray(){
    int t;
    cin >> t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> arr(n);
        int currSum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            currSum += arr[i];
        }
        if((s - currSum >= 0) && (s - currSum) % x == 0){
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

    dbmbAndTheArray();
    return 0;
}