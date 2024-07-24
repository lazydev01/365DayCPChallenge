#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void eshagLovesBigArrays(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(mini > arr[i]) mini = arr[i];
        }
        int count = 0;
        for(auto i : arr){
            if(mini == i){
                count++;
            }
        }
        cout << n - count << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    eshagLovesBigArrays();
    return 0;
}