#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void wonderfulColoring1(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        int colorCount = 0;
        for(auto i : mp){
            if(i.second>2){
                colorCount+=2;
            }
            else{
                colorCount+=(i.second);
            }
        }
        cout << colorCount/2 << endl;
    }
}

void calcSubset(vector<int> &arr, int target, int index, vector<vector<int>> &ans, vector<int> &subset){
    int currSubsetSum = accumulate(subset.begin(), subset.end(), 0);
    if(currSubsetSum==target){
        ans.push_back(subset);
        return;
    }
    int n = arr.size();
    for(int i=index; i<n; i++){
        if(currSubsetSum + arr[i] > target) return;
        subset.push_back(arr[i]);
        calcSubset(arr, target, i, ans, subset);
        subset.pop_back();
    }
}

void combinationSum1(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    vector<vector<int>> ans;
    vector<int> subset;
    sort(arr.begin(), arr.end());
    calcSubset(arr, target, 0, ans, subset);
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

    // wonderfulColoring1();
    combinationSum1();
    return 0;
}