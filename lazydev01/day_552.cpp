#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void oddQueries(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<int> preSum(n+1);
        preSum[0] = 0;
        preSum[1] = arr[0];
        for(int i=2; i<n+1; i++){
            preSum[i] = preSum[i-1] + arr[i-1];
        }
        for(int i=0; i<q; i++){
            int l, r, k;
            cin >> l >> r >> k;
            int qSum = preSum[r] - preSum[l-1];
            if(preSum[n]%2){
                if(qSum%2 == ((r-l+1)*k)%2){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                if(qSum%2 != ((r-l+1)*k)%2){
                    cout << "YES" << endl;
                }
                else{
                    cout << "NO" << endl;
                }
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    oddQueries();
    return 0;
}