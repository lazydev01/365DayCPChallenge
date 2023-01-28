/*

    Question -> https://www.codechef.com/problems/COLGLF2

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
        int s;
        cin >> s;
        vector<int> arr(s);
        for(int i=0; i<s; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(int i=0; i<s; i++){
            int k;
            cin >> k;
            vector<int> arr2(k);
            for(int j=0; j<k; j++){
                cin >> arr2[j];
                if(j==0){
                    ans+=arr2[j];
                }
                else{
                    ans+=(arr2[j]-arr[i]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}