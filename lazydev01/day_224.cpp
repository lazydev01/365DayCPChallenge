#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int merge(vector<int> &arr, int low, int mid, int high){
    int count = 0;
    vector<int> ans;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            count+=(mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        ans.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = ans[i-low];
    }
    return count;
}

int mergeSort(vector<int> &arr, int low, int high){
    int cnt = 0;
    if(low>=high) return cnt;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}


void countInversions(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << mergeSort(arr, 0, n-1) << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}