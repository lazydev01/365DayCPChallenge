#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void strangePartition(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        int sum = 0;
        int maxBeauty = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
            maxBeauty += (ceil)((arr[i]*1.0)/x);
        }
        int minBeauty = (ceil)((sum*1.0)/x);
        cout << minBeauty << " " << maxBeauty << endl;
    }
    
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    strangePartition();
    return 0;
}