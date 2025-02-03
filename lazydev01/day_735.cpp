#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void littleGirlAndMaximumSum(){
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> freq(n+1, 0);
    for(int i=0; i<q; i++){
        int x, y;
        cin >> x >> y;
        freq[x-1]++;
        freq[y]--;
    }
    for(int i=1; i<=n; i++){
        freq[i]+=freq[i-1];
    }
    sort(freq.begin(), freq.end(), greater<int>());
    sort(arr.begin(), arr.end(), greater<int>());
    int ans = 0;
    for(int i=0; i<freq.size(); i++){
        if(freq[i]==0){
            break;
        }
        ans += (freq[i] * arr[i]);
    }
    cout << ans << endl;

}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    littleGirlAndMaximumSum();
    return 0;
}