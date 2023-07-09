#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void printSubsequence(int index, vector<int> ansArr, int currSum, int target, int n, vector<int> arr){
    currSum+=arr[index];
    ansArr.push_back(arr[index]);
    if(currSum==target){
        for(int i=0; i<ansArr.size(); i++){
            cout << ansArr[i] << " ";
        }
        cout << endl;
    }
    if((index+1) < n){
        printSubsequence(index + 1, ansArr, currSum, target, n, arr);
        currSum-=arr[index];
        ansArr.pop_back();
        printSubsequence(index + 1, ansArr, currSum, target, n, arr);
    }
}

void printSubsequenceOfSumK(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans = {};
    printSubsequence(0, ans, 0, target, n, arr);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    printSubsequenceOfSumK();
    return 0;
}