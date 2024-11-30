#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void searchSingleElementInASortedArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << arr[0] << endl;
        return;
    }
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        else{
            if(arr[mid]!=arr[mid+1]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    cout << arr[low] << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    searchSingleElementInASortedArray();
    return 0;
}