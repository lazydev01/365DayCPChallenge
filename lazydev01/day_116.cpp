/*

    Question -> https://www.codechef.com/problems/TAKENOTLESS

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
        bool flag =false;
        for(auto it : m){
            if(it.second %2!=0){
                flag = true;
                break;
            }
        }
        if(flag){
            cout << "Marichka" << endl;
        }
        else{
            cout << "Zenyk" << endl;
        }

    }
    return 0;
}