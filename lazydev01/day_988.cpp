#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

vector<int> sieve(int n){
    vector<int> lp(n+1);
    vector<int> ans;
    for(int i = 2; i <=n; i++){
        if(lp[i] == 0){
            lp[i] = i;
            ans.push_back(i);
        }
        for(int j = 0; i * ans[j] <= n; j++){
            lp[i * ans[j]] = ans[j];
            if(ans[j] == lp[i]){
                break;
            }
        }
    }
    return ans;
}

void yetAnotherArrayProblem(){
    vector<int> primes = sieve(1e7);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int commonGcd = 0;
        for(int i = 0; i < n; i++){
            commonGcd = __gcd(commonGcd, arr[i]);
        }
        for(int i = 0; i < primes.size(); i++){
            if(commonGcd % primes[i] != 0){
                cout << primes[i] << endl;
                break;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    yetAnotherArrayProblem();
    return 0;
}