#include <bits/stdc++.h>
using namespace std;

#ifdef ONLINE_JUDGE
  #define cerr if(0) cerr
#endif

#define int long long int
#define endl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"

/*

    Question -> https://www.codechef.com/problems/DIET

*/

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=1; i<n; i++){
            arr[i] = arr[i] + arr[i-1];
        }
        bool flag = false;
        for(int i=0; i<n; i++){
            if(arr[i]<(i+1)*k){
                cout << "NO" << " ";
                cout << i+1 << endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "YES" << endl;
        }
    }
    return 0;
}