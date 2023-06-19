#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void binarySearch(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ind = -1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==target){
            ind = mid;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ind << endl;
}

void binarySearchRecursive(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << binarySearchRecursiveImpl(arr, 0, n-1, target) << endl;
}

int binarySearchRecursiveImpl(vector<int> &arr, int low, int high, int target){
    if(low>high) return -1;
    int mid = (low + high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        return binarySearchRecursiveImpl(arr, low, mid-1, target);
    }
    else{
        return binarySearchRecursiveImpl(arr,mid+1, high, target);
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}