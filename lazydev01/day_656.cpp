#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void calcSubset(vector<int> &arr, int index, vector<int> &subset, vector<vector<int>> &ans, int target){
    int currSum = accumulate(subset.begin(), subset.end(), 0);
    if(currSum == target) {
        ans.push_back(subset);
        return;
    }
    else if(currSum > target) return;
    if(index>=arr.size()) return;
    subset.push_back(arr[index]);
    calcSubset(arr, index+1, subset, ans, target);
    subset.pop_back();
    while(index<arr.size()-1 && arr[index+1]==arr[index]) index++;
    calcSubset(arr, index+1, subset, ans, target);
}

void combinationSum2(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> subset;
    vector<vector<int>> ans;
    calcSubset(arr, 0, subset, ans, target);
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

    combinationSum2();
    return 0;
}