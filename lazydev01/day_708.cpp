#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void aggressiveCows(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());
    sort(arr.begin(), arr.end());
    int ans;
    while(low<=high){
        int mid = (low + high) / 2;
        int counter = 1;
        int curr = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i] >= curr + mid){
                counter++;
                curr = arr[i];
            }
        }
        if(counter>=k){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << ans << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    aggressiveCows();
    return 0;
}