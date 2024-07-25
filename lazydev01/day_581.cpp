#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void fourSum(){
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    for(int i=0; i<n;){
        for(int j=i+1; j<n;){
            int tar = target - arr[i] - arr[j];
            int left = j+1;
            int right = n-1;
            while(left < right){
                if(arr[left] + arr[right] < tar) {
                    left++;
                }
                else if(arr[left] + arr[right] > tar){
                    right--;
                }
                else{
                    ans.push_back({arr[i], arr[j], arr[left], arr[right]});
                    left++;
                    while(left < right && arr[left]==arr[left-1]) left++;
                }
            }
            j++;
            while(j<n && arr[j]==arr[j-1]) j++;
        }
        i++;
        while(i<n && arr[i]==arr[i-1]) i++;
    }
    for(vector<int> a : ans){
        for(int i : a){
            cout << i << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    fourSum();
    return 0;
}