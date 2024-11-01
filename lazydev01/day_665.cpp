#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void getAllPermutations(vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    if(arr.size()==0){
        ans.push_back(ds);
    }
    for(int i=0; i<arr.size(); i++){
        int el = arr[i];
        arr.erase(arr.begin()+i);
        ds.push_back(el);
        getAllPermutations(arr, ans, ds);
        ds.pop_back();
        arr.insert(arr.begin()+i, el);
    }
}

void printAllPermutationsOfAStringOrArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<vector<int>> ans;
    vector<int> ds;
    getAllPermutations(arr, ans, ds);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void getAllPermutationsBackTracking(int index, vector<int> &arr, vector<vector<int>> &ans){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index; i<arr.size(); i++){
        swap(arr[i], arr[index]);
        getAllPermutationsBackTracking(index+1, arr, ans);
        swap(arr[i], arr[index]);
    }
}

void printAllPermutationsOfAStringOrArrayBackTracking(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<vector<int>> ans;
    getAllPermutationsBackTracking(0, arr, ans);
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

    // printAllPermutationsOfAStringOrArray();
    printAllPermutationsOfAStringOrArrayBackTracking();
    return 0;
}