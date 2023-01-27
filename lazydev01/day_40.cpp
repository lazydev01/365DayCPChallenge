/*

https://www.codechef.com/problems/ATM2

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

        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        string s = "";
        for(int i=0; i<n; i++){
            if(arr[i]<=x){
                s+='1';
                x-=arr[i];
            }
            else{s+='0';}
        }
        cout << s << endl;

    }
    return 0;
}