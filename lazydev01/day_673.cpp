#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool isCombinationPossible(int index, vector<int> &arr, int totalSum, int currSum){
    if(index==arr.size()){
        if(currSum%360==(totalSum-currSum)%360) return true;
        return false;
    }
    bool take = false;
    if(index<arr.size()){
        take = isCombinationPossible(index+1, arr, totalSum, currSum+arr[index]);
    }
    bool notTake = isCombinationPossible(index+1, arr, totalSum, currSum);
    return take || notTake;
}

void petrAndACombinationLock(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    int currSum = 0;
    if(isCombinationPossible(0, arr, totalSum, currSum)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    petrAndACombinationLock();
    return 0;
}

/*

121
62
66
177
5
173
16
31
80
31
54

*/