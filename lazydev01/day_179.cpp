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
    int cnt = 0;
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt+=(mid-left+1);
            right++;
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
        arr[i] = temp[i-low];
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int left, int right){
    int cnt = 0;
    if(left>=right) return cnt;
    int mid = (left+right)/2;
    cnt += mergeSort(arr, left, mid);
    cnt += mergeSort(arr, mid+1, right);
    cnt += merge(arr, left, mid, right);
    return cnt;
}

void countInversionsInAnArray(){
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

    countInversionsInAnArray();
    return 0;
}