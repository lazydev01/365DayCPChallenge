#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcMinDiv(vector<int> &arr, int val){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans += (ceil(arr[i]/(double)val));
    }
    return ans;
}

void smallestDivisorGivenAThreshold(){
    int n, threshold;
    cin >> n >> threshold;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    if(threshold<n){
        cout << -1 << endl;
    }
    else{
        int maximum = *max_element(arr.begin(), arr.end());
        int low = 1;
        int high = maximum;
        while(low<=high){
            int mid = (low+high)/2;
            if(calcMinDiv(arr, mid)<=threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        cout << high << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    
    return 0;
}