#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void xxxxx(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        bool containsNonDivisible = false;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
            if(arr[i]%x!=0){
                containsNonDivisible = true;
            }
        }
        if(!containsNonDivisible){
            cout << -1 << endl;
        }
        else{
            if(sum%x!=0){
                cout << n << endl;
            }
            else{
                int minIndex = n;
                for(int i=0; i<n; i++){
                    if(arr[i]%x!=0){
                        minIndex = min(minIndex, min(i, n-1-i));
                    }
                }
                cout << n - minIndex - 1 << endl;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    xxxxx();
    return 0;
}