/*

    Question -> https://www.codechef.com/problems/MXMEDIAN

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
        vector<int> arr(2*n);
        for(int i=0; i<2*n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        // for(int i=0; i<)
        vector<int> b;
        for(int i=0; i<n; i++){
            b.push_back(arr[i]);
            b.push_back(arr[n+i]);
        }
        cout << max(b[n-1], b[n]) << endl;
        for(int i=0; i<b.size(); i++){
            cout << b[i] << " ";
        }
        cout << endl;

    }
    return 0;
}