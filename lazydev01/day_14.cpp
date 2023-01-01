/*

https://www.codechef.com/problems/MAXCOUNT

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
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        int maximum = 0;
        for(auto i: m){
            if(maximum < i.second){
                maximum = i.second;
            }
        }
        for(auto i: m){
            if(i.second == maximum){
                cout << i.first << " " << i.second << endl;    
                break;
            }
        }
    }
    return 0;
}