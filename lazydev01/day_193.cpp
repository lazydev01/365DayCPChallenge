#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int daysRequired(vector<int> &weights, int capacity){
    int day = 1;
    int load = 0;
    for(int i=0; i<weights.size(); i++){
        if(load + weights[i] > capacity){
            day++;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return day;
}

void shippingPackagesWithinDDays(){
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    int low = *max_element(arr.begin(), arr.end());
    int high = sum;
    while(low<=high){
        int mid = (low + high)/2;
        if(daysRequired(arr, mid)<=d){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << low << endl;
}

void kthMissingNumber(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ind = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
    cout << ind + k << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}