#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void searchInARotatedSortedArray(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            ans = mid;
            break;
        }
        if(arr[low]<=arr[mid]){
            if(arr[mid]>=target && arr[low]<=target){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(target>=arr[mid] && target <= arr[low]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    cout << ans << endl;
}

void searchInARotatedSortedArrayWithDuplicates(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    bool ans = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target)ans = true;
        else if(arr[mid]==arr[low] && arr[mid]==arr[high]){
            low++;
            high--;
        }
        else if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target<=arr[mid]){
                 high = mid-1;   
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(target>=arr[mid] && target<=arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

   
    return 0;
}