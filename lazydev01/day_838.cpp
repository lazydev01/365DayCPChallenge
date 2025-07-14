#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void promo(){
    int n, q;
    cin >> n >> q;
    vector<int> items(n);
    for(int i = 0; i < n; i++){
        cin >> items[i];
    }
    sort(items.begin(), items.end(), greater<int>());
    vector<int> prefSum;
    prefSum.push_back(items[0]);
    for(int i = 1; i < n; i++){
        prefSum.push_back(prefSum[i-1] + items[i]);
    }
    for(int i = 0; i < q; i++){
        int y, x;
        cin >> y >> x;
        cout << prefSum[y - 1] - (x-y>=0 ? 0 : prefSum[y - x - 1]) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    promo();
    return 0;
}