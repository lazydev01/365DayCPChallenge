#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcTime(vector<int> &arr, int work){
    int paintersWork = arr[0];
    int painters = 1;
    for(int i=1; i<arr.size(); i++){
        if((paintersWork + arr[i]) > work){
            painters++;
            paintersWork = arr[i];
        }
        else{
            paintersWork += arr[i];
        }
    }
    return painters;
}

void paintersPartition(){
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while(low<=high){
        int mid = (low + high)/2;
        int painters = calcTime(arr, mid);
        if(painters > k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << low << endl;
}

void findSum(vector<int> &arr, int index, int sumLeft, vector<int> tempArr, vector<vector<int>> &storageArr){
    if(sumLeft==0){
        storageArr.push_back(tempArr);
        return;
    }
    if(sumLeft - arr[index] >= 0){
        tempArr.push_back(arr[index]);
        findSum(arr, index, sumLeft-arr[index], tempArr, storageArr);
        tempArr.pop_back();
    }
    if(index+1 < arr.size()){
        findSum(arr, index+1, sumLeft, tempArr, storageArr); 
    }
    else{
        return;
    }
    
}

void combinationSum(){
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> tempArr = {};
    vector<vector<int>> storageArr;
    findSum(arr, 0, sum, tempArr, storageArr);
    for(int i=0; i<storageArr.size(); i++){
        for(int j=0; j<storageArr[i].size(); j++){
            cout << storageArr[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    combinationSum();
    return 0;
}