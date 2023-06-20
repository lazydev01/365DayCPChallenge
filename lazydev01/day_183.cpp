#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void lowerBound(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

void upperBound(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

void searchInsertPosition(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans = mid;
            break;
        }
        else if(arr[mid]>target){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    cout << ans << endl;
}

void floorAndCeilInASortedArray(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int low = 0;
    int high = n-1;
    int low2 = 0;
    int high2 = n-1;
    int ceil = -1;
    int floor = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=target){
            ceil = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    while(low2<=high2){
        int mid = (low2+high2)/2;
        if(arr[mid]<=target){
            floor = arr[mid];
            low2 = mid + 1;
        }
        else{
            high2 = mid - 1;
        }
    }
    cout << floor << " " << ceil << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // lowerBound();
    // upperBound();
    floorAndCeilInASortedArray();
    return 0;
}