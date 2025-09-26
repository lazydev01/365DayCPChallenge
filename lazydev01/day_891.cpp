#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void makeProductEqualOne(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int ans = 0;
    int count_neg_one = 0;
    bool hasZero = false;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 0) hasZero = true;
        int diff_pos = abs(arr[i] - 1);
        int diff_neg = abs(arr[i] - (-1));
        if(diff_neg < diff_pos){
            count_neg_one++;
        }
        ans += min(diff_pos, diff_neg);
    }
    if(count_neg_one%2 == 1 && !hasZero){
        ans += 2;
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    makeProductEqualOne();
    return 0;
}