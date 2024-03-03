#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void maximizeAdjacentSum(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int mini = INT_MAX;
        int mini2 = INT_MAX;
        int curr_count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]==mini){
                curr_count++;
            }
            else if(arr[i]<mini){
                mini2 = mini;
                mini = arr[i];
                curr_count = 1;
            }
            if(arr[i]<mini2 && mini!=arr[i]){
                mini2 = arr[i];
            }
        }
        if(curr_count>1){
            mini2 = mini;
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        cout << (2*sum)-mini - mini2 << endl;


    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    maximizeAdjacentSum();
    return 0;
}