#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

bool canBooksAllocate(vector<int> &arr, int threshold, int students){
    int currPages = arr[0];
    int allocatedStudents = 1;
    for(int i=1; i<arr.size(); i++){
        if(currPages+arr[i]>threshold){
            currPages = arr[i];
            allocatedStudents++;
        }
        if(allocatedStudents>threshold){
            return false;
        }
    }
    return true;
}

void allocateBooks(){
    int n, students;
    cin >> n >> students;
    vector<int> arr(n);
    for(int i = 0; i < students; i++){
        cin >> arr[i];
    }
    if(students>n){
        cout << -1 << endl;
    }
    else{
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        while(low<=high){
            int mid = (low + high)/2;
            if(canBooksAllocate(arr, mid, students)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << low << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}