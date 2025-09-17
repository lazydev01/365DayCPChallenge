#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void yarikAndArray(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int maxEl = INT_MIN;
        bool allNeg = true;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] >= 0){
                allNeg = false;
            }
            maxEl = max(maxEl, arr[i]);
        }
        if(allNeg){
            cout << maxEl << endl;
            continue;
        }
        int maxSum = 0;
        int sum = 0;
        bool newParity = true;
        bool evenParity = false;
        for(int i = 0; i < n; i++){
            if(newParity){
                evenParity = (arr[i]%2==0);
                newParity = false;
            }
            if((evenParity && arr[i]%2 == 0) || (!evenParity && arr[i]%2 != 0)){
                sum += arr[i];
            }
            else{
                sum = arr[i];
                evenParity = (arr[i] %2 == 0);
            }
            maxSum = max(maxSum, sum);
            if(sum < 0){
                sum = 0;
                newParity = true;
            }
            evenParity = !evenParity;
        }
        cout << maxSum << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    yarikAndArray();
    return 0;
}