#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void countSum(vector<int> &arr, int index, int sum, vector<int> &ans){
    int length = arr.size();
    if(index==length){
        ans.push_back(sum);
        return;
    }
    countSum(arr, index+1, sum+arr[index], ans);
    countSum(arr, index+1, sum, ans);
}

void subsetSums(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    countSum(arr, 0, 0, ans);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    subsetSums();
    return 0;
}