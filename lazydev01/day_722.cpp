#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int calcWaterFilled(vector<int> &arr, int height){
    int water = 0;
    for(auto i : arr){
        water += max(0ll, height-i);
    }
    return water;
}

void buildingAnAquarium(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int maxHeightCoral = *max_element(arr.begin(), arr.end());
        int waterFilled = calcWaterFilled(arr, maxHeightCoral);
        if(waterFilled<=x){
            int extraHeight = (x - waterFilled)/n;
            cout << extraHeight+maxHeightCoral << endl;
        }
        else{
            int maxHeight = 0;
            int low = 1;
            int high = maxHeightCoral;
            while(low<=high){
                int mid = (low + high)/2;
                waterFilled = calcWaterFilled(arr, mid);
                if(waterFilled<=x){
                    maxHeight = mid;
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            cout << maxHeight << endl;
        }
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    buildingAnAquarium();
    return 0;
}