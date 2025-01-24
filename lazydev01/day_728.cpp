#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void progressiveSquare(){
    int t;
    cin >> t;
    while(t--){
        int n, a, c, d;
        cin >> n >> c >> d;
        vector<int> arr(n*n);
        for(int i=0; i<(n*n); i++){
            cin >> arr[i];
        }
        int minEl = *min_element(arr.begin(), arr.end());
        vector<int> builtArr;
        builtArr.push_back(minEl);
        int currEl = minEl;
        for(int i=0; i<n-1; i++){
            currEl+=d;
            builtArr.push_back(currEl);
        }
        for(int i=0; i<n; i++){
            int currEl = builtArr[i];
            for(int j=0; j<n-1; j++){
                currEl+=c;
                builtArr.push_back(currEl);
            }
        }
        sort(arr.begin(), arr.end());
        sort(builtArr.begin(), builtArr.end());
        bool canFormProgressiveSquare = true;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=builtArr[i]){
                canFormProgressiveSquare = false;
                break;
            }
        }
        if(canFormProgressiveSquare){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    progressiveSquare();
    return 0;
}