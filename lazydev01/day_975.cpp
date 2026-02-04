#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void divisiblePairs(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);
        int pairs = 0;
        map<int, map<int, int>> mp;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            pairs += mp[(x - (arr[i]%x))%x][arr[i]%y];
            mp[arr[i]%x][arr[i]%y]++;
        }
        cout << pairs << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    divisiblePairs();
    return 0;
}