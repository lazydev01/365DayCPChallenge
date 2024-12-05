#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void weGotEverythingCovered(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string single = "";
        for(int i=0; i<k; i++){
            single += (char)('a' + i);
        }
        string ans = "";
        for(int i=0; i<n; i++){
            ans += single;
        }
        cout << ans << endl;
    }
}

void searchElementInARotatedSortedArray(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(arr[mid]==k){
            ans = mid;
        }
        if(arr[low] <= arr[mid]){
            if(k>=arr[low] && k<=arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(k>=arr[mid] && k<=arr[high]){
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

    // weGotEverythingCovered();
    searchElementInARotatedSortedArray();
    return 0;
}