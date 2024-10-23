#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcSeqSum(int n){
    return (n*(n+1))/2;
}

int calcCount(int low, int high, int target){
    int ans = 0;
    while(low <= high){
        int mid = (low + high) / 2;
        if(calcSeqSum(mid) <= target){
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

void longestGoodArray(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int cnt = 1;
        int diff = r - l;
        cout << cnt + calcCount(0, diff, diff) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    longestGoodArray();
    return 0;
}