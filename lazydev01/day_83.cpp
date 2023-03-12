/*

    Question -> https://www.codechef.com/problems/DIFFMED

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
        vector<int> arr;
        for(int i=1; i<=n; i++){
            arr.push_back(i);
        }
        for(int i=0; i<n/2; i++){
            cout << arr[n-i-1] << " " << arr[i] << " ";
        }
        if(n%2!=0){
            cout << arr[n/2] << endl;
        }
        else{
            cout << endl;
        }

    }
    return 0;
}