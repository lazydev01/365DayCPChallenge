#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void singleElementInASortedArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(n==1){
        cout << arr[0] << endl;
    }
    if(arr[0]!=arr[1]){
        cout << arr[0] << endl;
    }
    if(arr[n-1]!=arr[n-2]){
        cout << arr[n-1] << endl;
    }
    int low = 1;
    int high = n-2;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
            cout << arr[mid] << endl;
        }
        if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2!=0 && arr[mid]==arr[mid-1])){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
}

void findPeakElementSingle(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(arr[0]>arr[1]){
        cout << arr[0] << endl;
    }
    else if(arr[n-1]>arr[n-2]){
        cout << arr[n-1] << endl;
    }
    else{
        int low = 1;
        int high = n-2;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                cout << arr[mid] << endl;
                break;
            }
            else if(arr[mid]>arr[mid+1]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    // singleElementInASortedArray();
    findPeakElementSingle();
    return 0;
}

/*
0 1 2 3 4 5 6 7 8
1 1 2 2 3 3 4 5 5
  l     m     h               

*/