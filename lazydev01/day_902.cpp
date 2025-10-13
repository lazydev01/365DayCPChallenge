#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findTheDifferentOnes(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i > 0){
                if(arr[i] == arr[i-1]){
                    ans[i-1] = -1;
                }
                else{
                    ans[i-1] = i+1;
                }
            }
        }
        ans[n-1] = INT_MAX;
        for(int i = n-2; i>=0; i--){
            if(ans[i] == -1){
                ans[i] = ans[i+1];
            }
        }
        int q;
        cin >> q;
        for(int i = 0; i < q; i++){
            int x, y;
            cin >> x >> y;
            if(ans[x-1] <= y){
                cout << ans[x-1] << " " << x << endl; 
            }
            else{
                cout << -1 << " " << -1 << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    findTheDifferentOnes();
    return 0;
}