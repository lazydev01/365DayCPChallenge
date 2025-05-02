#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void satisfyingConstraints(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> type3Nums;
        int lowerBound = 0;
        int upperBound = INT_MAX;
        for(int i=0; i<n; i++){
            int a, x;
            cin >> a >> x;
            if(a==1){
                lowerBound = max(lowerBound, x);
            }
            else if(a == 2){
                upperBound = min(upperBound, x);
            }
            else{
                type3Nums.push_back(x);
            }
        }
        int count = upperBound - lowerBound + 1;
        for(auto i : type3Nums){
            if(i>=lowerBound && i<=upperBound){
                count--;
            }
        }
        cout << max(0ll, count) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    satisfyingConstraints();
    return 0;
}