/*

    Question -> https://www.codechef.com/problems/EQUALITY

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
        int total = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            total+=arr[i];
        }
        total = total/(n-1);
        for(int i=0; i<n; i++){
            cout << total - arr[i] << " ";
        }
        cout << endl;

    }
    return 0;
}