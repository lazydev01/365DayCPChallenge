#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void findSubset(vector<int> &arr, int index, 
vector<int> &temp, vector<vector<int>> &ans){
    ans.push_back(temp);
    for(int i=index; i<arr.size(); i++){
        if(i!=index && arr[i]==arr[i-1])continue;
        temp.push_back(arr[i]);
        findSubset(arr, i+1, temp, ans);
        temp.pop_back();
    }
}

void subsetSum2(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> temp;
    findSubset(arr, 0, temp, ans);
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