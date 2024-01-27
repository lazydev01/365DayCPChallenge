#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void joinStates(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        int cum_sum = 0;
        for(auto i : arr){
            if(i>=m){
                ans++;
                cum_sum = 0;
            }
            else{
                cum_sum+=i;
                if(cum_sum>=m){
                    ans++;
                    cum_sum = 0;
                }
            }
        }
        cout << ans << endl;
    }
}

void subsetGCD(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int ans = n/k;
        int count = 0;
        while(count<k){
            cout << ans << " ";
            ans += (n/k);
            count++;
        }
        cout << endl;
    }
}

void xorry1(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int log_x = log2(x);
        int ans_1 = 1;
        for(int i=0; i<log_x; i++){
            ans_1*=2;
        }
        int ans_2 = x^ans_1;
        cout << min(ans_2, ans_1) << " " << max(ans_2, ans_1) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // joinStates();
    // subsetGCD();
    xorry1();
    return 0;
}