#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void challengingCliffs(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        vector<int> diffArr;
        int minDiff = INT_MAX;
        for(int i=1; i<n; i++){
            diffArr.push_back(arr[i] - arr[i-1]);
            minDiff = min(minDiff, arr[i] - arr[i-1]);
        }
        int minDiffIndex = -1;
        for(int i=0; i<n-1; i++){
            if(diffArr[i] == minDiff){
                minDiffIndex = i;
                break;
            }
        }
        vector<int> ans;
        ans.push_back(arr[minDiffIndex]);
        for(int i=minDiffIndex+2; i<n; i++){
            ans.push_back(arr[i]);
        }
        for(int i=0; i<minDiffIndex; i++){
            ans.push_back(arr[i]);
        }
        ans.push_back(arr[minDiffIndex+1]);
        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    challengingCliffs();
    return 0;
}