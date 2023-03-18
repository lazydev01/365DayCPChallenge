/*

    Question -> https://www.codechef.com/problems/VCOUPLE

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
        vector<int> arr2(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            cin >> arr2[i];
        }
        sort(arr.begin(), arr.end());
        sort(arr2.begin(), arr2.end(), greater<int>());
        int maximum = 0;
        for(int i=0; i<n; i++){
            int sum = arr[i]+arr2[i];
            maximum = max(sum, maximum);
        }
        cout << maximum << endl;


    }
    return 0;
}