/*

Question -> https://www.codechef.com/problems/FARAWAY

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

        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int count = 0;
        for(int i=0; i<n; i++){
            if(abs(arr[i]-1)> abs(arr[i]-m)){
                count+=(abs(arr[i]-1));
            }
            else{
                count+=(abs(arr[i]-m));
            }
        }
        cout << count << endl;
    }
    return 0;
}