#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void gridUniquePaths(){
    int n, m;
    cin >> n >> m;
    int total_steps = n + m -2;
    int right_steps = n - 1;
    int ans = 1;
    for(int i=1; i<=right_steps; i++){
        ans *= (total_steps + i - right_steps);
        ans /= i;
    }
    cout << ans << endl;
}

void countReversePairs(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]*2){
                count++;
            }
        }
    }
    cout << count << endl;
}

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left<=mid && right<=high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

int countNumberOfReversePairs(vector<int> &arr, int low, int mid, int high){
    int right = mid + 1;
    int cnt = 0;
    for(int i=low; i<=mid; i++){
        while(right <= high && arr[i] > 2*arr[right]){
            right++;
        }
        cnt += (right - (mid + 1));
    }
    return cnt;
}

int mergeSort(vector<int> &arr, int low, int high){
    int cnt = 0;
    int mid = (low + high) / 2;
    if(low >= high) return cnt;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += countNumberOfReversePairs(arr, low, mid, high);
    merge(arr, low, mid, high);
    return cnt;
}



void countReversePairsOptimal(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << mergeSort(arr, 0, n-1);
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // gridUniquePaths();
    // countReversePairs();
    countReversePairsOptimal();
    return 0;
}