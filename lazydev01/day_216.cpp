#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void addPermutation(int index,  vector<int> &arr, vector<vector<int>> &ans){
    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i=index; i<arr.size(); i++){
        swap(arr[i], arr[index]);
        addPermutation(index+1, arr, ans);
        swap(arr[i], arr[index]);
    }
}

void printPermutationOfStringOrArrayWithNoExtraSpace(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<vector<int>> ans;
    addPermutation(0, arr, ans);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}


void nQueens(){
    int n;
    cin >> n;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    printPermutationOfStringOrArrayWithNoExtraSpace();

    return 0;
}