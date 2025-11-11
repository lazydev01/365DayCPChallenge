#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void _250ThousandTonsOfTNT(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int diff = 0;
        for(int i = 1; i <= n; i++){
            if(n%i == 0){
                int maxV = 0;
                int minV = LONG_LONG_MAX;
                for(int j = 0; j < n; j+=i){
                    int sum = 0;
                    for(int k = j; k < j + i; k++){
                        sum += arr[k];
                    }
                    maxV = max(maxV, sum);
                    minV = min(minV, sum);
                }
                diff = max(diff, maxV - minV);
            }
        }
        cout << diff << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    _250ThousandTonsOfTNT();
    return 0;
}