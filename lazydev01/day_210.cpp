#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findCombination(int index, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=index; i<arr.size(); i++){
        if(i>index && arr[i]==arr[i-1]){
            continue;
        }
        if(arr[i]>target){
            break;
        }
        ds.push_back(arr[i]);
        findCombination(i+1, arr, target-arr[i], ans, ds);
        ds.pop_back();
    }
}

void combinationSum2(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> temp;
    findCombination(0, arr, target, ans, temp);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}


int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}