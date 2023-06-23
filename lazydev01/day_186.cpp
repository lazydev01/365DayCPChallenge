#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void minimumInARotatedSortedArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

void minimumInASortedRepeatedArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            ans = min(ans, arr[low]);
            low++;
            high--;
        }
        else if(arr[low]<=arr[mid]){
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

void howManyTimesArrayHasBeenRotated(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    int ind = -1;
    while(low<=high){
        int mid =(low+high)/2;
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                ans = arr[low];
                ind = low;
            }
            low = mid + 1;
        }
        else{
            if(arr[mid]<ans){
                ans = arr[mid];
                ind = mid;
            }
            high = mid - 1;
        }
    }
    cout << ind << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}