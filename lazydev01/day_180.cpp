#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]>arr[right]){
            temp.push_back(arr[right]);
            right++;
        }
        else{
            temp.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i]=temp[i-low];
    }
}

int countReversePairs(vector<int> &arr, int low, int mid, int high){
    int right = mid+1;
    int cnt = 0;
    for(int i=low; i<=mid; i++){
        while(right<=high && arr[i]>(2*arr[right])){
            right++;
        }
        cnt+=(right - (mid + 1));
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high){
    int cnt = 0;
    if(low>=high) return cnt;
    int mid = (low + high)/2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid+1, high);
    cnt += countReversePairs(arr, low, mid, high);
    merge(arr, low, mid, high);
    return cnt;
}

void reversePairs(){
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

    reversePairs();

    
    return 0;
}