#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void iteratePermutation(vector<int> &arr, vector<int> &temp, map<int, int> &mp, vector<vector<int>> &ans){
    if(temp.size()==arr.size()){
        ans.push_back(temp);
        return;
    }
    for(int i=0; i<arr.size(); i++){
        if(mp[arr[i]]==0){
            temp.push_back(arr[i]);
            mp[arr[i]]=1;
            iteratePermutation(arr, temp, mp, ans);
            temp.pop_back();
            mp[arr[i]] = 0;
        }
    }
}

void printPermutationOfStringOrArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    map<int, int> freq;
    vector<vector<int>> ans;
    vector<int> temp;
    iteratePermutation(arr, temp, freq, ans);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}