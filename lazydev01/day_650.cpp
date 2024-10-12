#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findSubsets(int index, vector<int> &subsets, vector<vector<int>> &ans, vector<int> &arr){
    ans.push_back(subsets);
    for(int i=index; i<arr.size(); i++){
        if(i>index && arr[i]==arr[i-1]){
            continue;
        }
        subsets.push_back(arr[i]);
        findSubsets(i+1, subsets, ans, arr);
        subsets.pop_back();
    }
}

void subset2(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> subsets;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    findSubsets(0, subsets, ans, arr);
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

    subset2();
    return 0;
}