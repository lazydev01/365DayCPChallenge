/*

Question -> https://www.codechef.com/problems/HOLIDAYS

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

        int n, w;
        cin >> n >> w;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int summation = 0;
        int i=0;
        while(summation<w){
            summation+=arr[i];
            i++;
        }
        cout << n-i << endl;
    }
    return 0;
}