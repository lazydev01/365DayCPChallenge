#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int numberOfGasStationsRequired(long double mid, vector<int> &arr){
    int cnt = 0;
    for(int i=0; i<arr.size()-1; i++){
        int numberInBetween = ((arr[i+1]-arr[i])/mid);
        if(arr[i+1]-arr[i]/mid == numberInBetween * mid){
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}

void minimizeMaximumBetweenGasStationsUsingBinarySearch(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    long double low = 0;
    long double high = 0;
    for(int i=0; i<n-1; i++){
        high = max(high, (long double)arr[i+1]-arr[i]);
    }
    int diff = 1e-6;
    long double ans;
    while(high-low>diff){
        long double mid = (low + high)/2;
        int cnt = numberOfGasStationsRequired(mid, arr);
        if(cnt > k){
            low = mid;
        }
        else{
            ans = high;
            high = mid;
        }
    }
    cout << ans << endl;
}

void calcSum(vector<int> &arr, int index, int sum, vector<int> &ans){
    if(index>=arr.size()){
        ans.push_back(sum);
    }
    sum += arr[index];
    calcSum(arr, index+1, sum, ans);
    sum-=arr[index];
    calcSum(arr, index+1, sum, ans);
}

void subsetSums(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    calcSum(arr, 0, 0, ans);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}