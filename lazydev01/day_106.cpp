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

        int n, k, l;
        cin >> n >> k >> l;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(k>0){
            arr[n-1]=arr[n-1]+(k*(l-1));
        }
        map<int, int> m;
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        int maximum = *max_element(arr.begin(), arr.end());
        if(arr[n-1]==maximum && m[arr[n-1]]==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}