#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void medianOfTwoSortedArrays(){
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }
    if(n1>n2){
        swap(n1, n2);
        swap(arr1, arr2);
    }
    int low = 0;
    int high = n1;
    int leftElements = (n1 + n2 + 1)/2;
    double ans = -1;
    while(low<=high){
        int mid1 = (low + high)/2;
        int mid2 = leftElements - mid1;
        int l1 = INT_MIN;
        int l2 = INT_MIN;
        int r1 = INT_MAX;
        int r2 = INT_MAX;
        if(mid1 > 0){
            l1 = arr1[mid1 - 1];
        }        
        if(mid2 > 0){
            l2 = arr2[mid2 - 1];
        }
        if(mid1 < n1){
            r1 = arr1[mid1]; 
        }
        if(mid2 < n2){
            r2 = arr2[mid2];
        }
        
        if(l1<=r2 && l2<=r1){
            if((n1 + n2)%2){
                ans = max(l1, l2);
            }
            else{
                ans = ((max(l1, l2) + min(r1, r2)) * 1.0 / 2);
            }
            break;
        }

        else if(l1>r2){
            high = mid1- 1;
        }
        else{
            low = mid1 + 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    medianOfTwoSortedArrays();
    return 0;
}