/*

    Question -> https://www.codechef.com/problems/PLAYFIT


*/
#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int curr_max = arr[n-1]-1;
        int ans = -1;
        for(int i=n-1; i>=0; i--){
            ans = max(ans, curr_max-arr[i]);
            curr_max = max(curr_max, arr[i]);
        }
        if(ans <= 0){
            cout << "UNFIT" << endl;
        }
        else{
            cout << ans << endl;
        }
        

    }
    return 0;
}