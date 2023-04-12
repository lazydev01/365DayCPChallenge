/*

    Question -> https://www.codechef.com/problems/MEXSPLIT

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
        int count = 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]==0){
                count++;
            }
        }
        cout << max(count, n-count) << endl;

    }
    return 0;
}