#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void longLong(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int maxSum = 0;
        int minOperations = 0;
        bool isPositive = true;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                maxSum += arr[i];
                if(!isPositive){
                    minOperations++;
                    isPositive = true;
                }
            }
            else{
                maxSum += (arr[i] * -1);
                if(arr[i]<0){
                    isPositive = false;
                }
            }
        }
        if(!isPositive){
            minOperations++;
        }
        cout << maxSum << " " << minOperations << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    longLong();
    return 0;
}