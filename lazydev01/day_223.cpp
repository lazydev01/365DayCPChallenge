/*

    Question -> https://www.codechef.com/problems/ADJSUMPAR

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
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        // Assuming that the array A always starts with odd number
        bool odd = true;
        for(int i=0; i<n-1; i++){
            if(arr[i]==1){
                odd = !odd;
            }
        }
        if(odd==arr[n-1]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}