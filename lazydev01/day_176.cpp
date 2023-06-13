#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void mergeOverlappingIntervals(){
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for(int i=0; i<n; i++){
        int first, second;
        cin >> first >> second;
        vector<int> temp = {first, second};
        arr.push_back(temp);
    }
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        if(ans.empty()){
            ans.push_back(arr[i]);
        }
        if(arr[i][0]<=ans.back()[1]){
            ans.back()[1] = max(arr[i][1], ans.back()[1]);
        }
        else{
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    mergeOverlappingIntervals();
    return 0;
}