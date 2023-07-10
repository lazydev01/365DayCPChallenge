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
    vector<int> temp;
    while(low<mid && mid<high){
        if(arr[low]<=arr[mid]){
            temp.push_back(arr[low]);
            low++;
        }
        else{
            temp.push_back(arr[mid]);
            mid++;
        }
    }
    while(low<mid){
        temp.push_back(arr[low]);
        low++;
    }
    while(mid<high){
        temp.push_back(arr[mid]);
        mid++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low<high){
        int mid = (low + high)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

void mergeSortIO(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, n-1);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    mergeSortIO();
    return 0;
}