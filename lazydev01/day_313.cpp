#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool absSort(int a, int b){
    return abs(a) > abs(b);
}

void wishcraft(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p, q;
        cin >> p >> q;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(n==1){
            cout << 0 << endl;
        }
        else{
            sort(arr.begin(), arr.end());
            int ans = arr[arr.size()-1] - arr[0];
            sort(arr.begin() + 1, arr.end()-1, absSort);
            int sum_p_q = p + q;
            for(int i=0; i<min((long long) arr.size()-2, sum_p_q); i++){
                ans += abs(arr[i+1]);
            }
            cout << ans << endl;
        }
        
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    wishcraft();
    return 0;
}