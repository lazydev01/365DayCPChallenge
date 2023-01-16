/*

Question -> https://www.codechef.com/problems/SPACEARR

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
        sort(arr.begin(), arr.end());
        bool impossible = false;
        int sum = 0;
        for(int i=1; i<=n; i++){
            if(arr[i-1]>i){
                impossible = true;
                break;
            }
            else{
                sum+=(i-arr[i-1]);
            }
        }
        if(impossible){
            cout << "Second" << endl;
        }
        else{
            if(sum%2==0){
                cout << "Second" << endl;
            }
            else{
                cout << "First" << endl;
            }
        }

    }
    return 0;
}