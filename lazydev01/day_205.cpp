#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void quickSort(vector<int> &arr, int low, int high){
    int i = low;
    int j = high;
    if(low<high){
        while(i<j){
            while(arr[i]<=arr[low] && i<=high-1){
                i++;
            }
            while(arr[j]>arr[low] && j>=low+1){
                j--;
            }
            if(i<j){
                swap(arr[i], arr[j]);
            }   
        }
        swap(arr[low], arr[j]);
        quickSort(arr, low, j-1);
        quickSort(arr, j+1, high);
        
    }
}

void quickSortDesc(vector<int> &arr, int low, int high){
    int i = low;
    int j = high;
    if(low<high){
        while(i<j){
            while(arr[i]>arr[low] && i<=high-1){
                i++;
            }
            while(arr[j]<=arr[low] && j>=low+1){
                j--;
            }
            if(i<j){
                swap(arr[i], arr[j]);
            }   
        }
        swap(arr[low], arr[j]);
        quickSort(arr, low, j-1);
        quickSort(arr, j+1, high);    
    }
}

void quickSortIO(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    quickSortIO();
    return 0;
}