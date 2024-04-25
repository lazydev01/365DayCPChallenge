#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

void polycarpAndSumOfSubsequences(){
    int t;
    cin >> t;
    while(t--){
        vector<int> arr(7);
        for(int i=0; i<7; i++){
            cin >> arr[i];
        }
        cout << arr[0] << " " << arr[1] << " " << arr[6]-(arr[0]+arr[1]) << endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    polycarpAndSumOfSubsequences();
    return 0;
}